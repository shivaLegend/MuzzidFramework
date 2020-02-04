//
//  MuzzidFramework.swift
//  MuzzidFramework
//
//  Created by Tai Nguyen on 2/4/20.
//  Copyright © 2020 Tai Nguyen. All rights reserved.
//

import UIKit
import Foundation

public class MuzzidFramework {

    private init() {}
    
    public static func add(a: Int, b: Int) -> Int {
        return a + b
    }
    
    public static func sub(a: Int, b: Int) -> Int {
        return a - b
    }
    
    public static func openStoryboard() {
        let s = UIStoryboard (name: "Main", bundle: nil)
                
                let vc = s.instantiateInitialViewController()
        if vc == nil {
            print("nil")
        } else {
            print("not nil")
        }
//        vc!.modalPresentationStyle = .fullScreen //or .overFullScreen for transparency
        
    }
   
    
}
