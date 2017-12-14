//
//  ViewController.swift
//  MyGeoApplication
//
//  Created by Roberto Avanzi on 13/12/17.
//  Copyright © 2017 Pikkart. All rights reserved.
//

import UIKit
import CoreLocation

class ViewController: PKTGeoMainController {
    var pointOfInterests:[PKTGeoElement] = []

    internal func createPointOfInterests() {
        var geoLocation:PKTGeoLocation
        var geoElement:PKTGeoElement
        
        let poiNames=["COOP, Modena":CLLocationCoordinate2DMake(44.654894, 10.914749),
                      "Burger King, Modena":CLLocationCoordinate2DMake(44.653505, 10.909653),
                      "Piazza Matteotti, Modena":CLLocationCoordinate2DMake(44.647315, 10.924802)]
        var index = 0
        for (poiName, coord2D) in poiNames {
            geoLocation = PKTGeoLocation(latitudine: coord2D.latitude, andLongitudine: coord2D.longitude, andAltitudine: 0)
            if (poiName == "Burger King, Modena") {
                geoElement = PKTGeoElement(location: geoLocation, andIdLocation: "\(index)_"+poiName, andName: poiName, andVisibility:.ON_AUGMENTED_REALITY)
            } else {
                geoElement = PKTGeoElement(location: geoLocation, andIdLocation: "\(index)_"+poiName, andName: poiName)
            }
            pointOfInterests.append(geoElement)
            index = index + 1
        }
        
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.createPointOfInterests()
        self.disableRecognition()
        self.setGeoElements(pointOfInterests)

    }
    
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    //MARK: PKTIArGeoListener callbacks
    override open func onGeoLocationChanged(_ location: Any!) {
        print ("geolocation Changed!!!")
    }
    override open func onGeoElement(_ geoElement: Any!, click view: UIView!) {
        let geoElem:PKTGeoElement = geoElement as! PKTGeoElement
        
        print("onGeoElement Id = \(geoElem.id) clicked!!!")
    }
    
    override open func onMapOrCameraClicked() {
        print ("onMapOrCameraClicked called!!!")
        
    }

}

