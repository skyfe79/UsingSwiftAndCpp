//
//  ViewController.swift
//  SwiftAndCpp
//
//  Created by burt on 2016. 2. 23..
//  Copyright © 2016년 BurtK. All rights reserved.
//

import UIKit


class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        
        let itsCppWrapper = ObjCppWrapper(name: "김성철")
        print(itsCppWrapper.getName())
        itsCppWrapper.setName("Burt.K")
        print(itsCppWrapper.getName())
        
        var aa = 10
        var bb = 20
        swap(&aa, &bb)
        print("\(aa), \(bb)")
    
        c_print("Hello")
        c_printByte(10)
        
        let letterA = "A"
        if let char = letterA.unicodeScalars.first {
            if char.isASCII() {
                c_printChar(Int8(char.value))
            }
        }
        
        c_printInt(100)
        c_printFloat(1000.0)
        c_printDouble(2000.0)
        
        let vertex = Vertex(a: 10, b: 20, c: 30)
        c_printVertex(vertex)

    
        var b : UInt8 = 100
        c_transformByte(&b)
        print(b)
        
        
        if let char = letterA.unicodeScalars.first {
            if char.isASCII() {
                // copy ascii code as mutable
                var ch : Int8 = Int8(char.value)
                c_transformChar(&ch)
                let result = String(UnicodeScalar(UInt8(ch)))
                print(result)
            }
        }

        var i : Int32 = 100
        c_transformInt(&i)
        print(i)
        
        var f : Float = 10.0
        c_transformFloat(&f)
        print(f)
        
        var d : Double = 1000.0
        c_transformDouble(&d)
        print(d)
        
        var v : Vertex = Vertex(a: 10, b: 20, c: 30)
        c_transformVertex(&v)
        print(v)
    
        
        var iv : Int32 = 100
        c_printIntAsVoidPointer(&iv)
        print(iv)
        
        c_transformIntAsVoidPointer(&iv)
        print(iv)
        
        withUnsafeMutablePointer(&iv) { (ptr:UnsafeMutablePointer<Int32>) -> Void in
            let voidPtr : UnsafeMutablePointer<Void> = unsafeBitCast(ptr, UnsafeMutablePointer<Void>.self)
            c_transformIntAsVoidPointer(voidPtr)
            print(iv)            
        }
        
        let sum123 = c_sumIntArray([1,2,3], 3)
        print(sum123)
        
        let sum1to10 = c_sumIntArray(Array(1...10), 10)
        print(sum1to10)
        
        
        let mike = UnsafeMutablePointer<Person>.alloc(1)
        c_setPersonName(mike, "Mike")
        c_printPerson(mike.memory)
        
        mike.dealloc(1)
        
        
        
        //c_printSpaceShip(COpaquePointer)
        
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
    }
    
    func swap(inout a : Int, inout _ b : Int) {
        let temp : Int = a
        a = b
        b = temp
    }
}

