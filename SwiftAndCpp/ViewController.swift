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
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
    }
}

