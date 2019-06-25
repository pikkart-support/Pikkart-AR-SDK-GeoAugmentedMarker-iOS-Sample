/* ===============================================================================
 * Copyright (c) 2016 Pikkart S.r.l. All Rights Reserved.
 * Pikkart is a trademark of Pikkart S.r.l., registered in Europe,
 * the United States and other countries.
 *
 * This file is part of Pikkart AR Geolocalization SDK.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * ===============================================================================*/

//FIXME!!!!!
#import "PKTIArGeoListener.h"
#import "PKTMarkerViewAdapter.h"
#ifdef __URHO3D__
#import <pikkartUrho3DAR/PKTRecognitionController.h>
#else
#import <pikkartAR/PKTRecognitionController.h>
#endif

#import <GLKit/GLKit.h>
/**
 * \class PKTGeoMainController
 * \brief 
 *
 * The Pikkart Geo Localization View Controller.
 * It allows to display a  list of PKTGeoElement point of interests either on camera
 * or on Google Maps.
 *
 *
 *
 */
@interface PKTGeoMainController:PKTRecognitionController<PKTIArGeoListener>

/*! \brief create and show a list of point of interests
 *
 *  \param geoElements list Of PKTGeoElement 
 */
-(void)setGeoElements:(NSArray *)geoElements;

/*! \brief create a PKTGeoMainController with marker view adapter for geo and map marker
 *
 *  \param geoViewAdapter view Adapter for geo localization view
 *  \param mapViewAdapter view Adapter for Google Maps view
 */
-(instancetype)initWithGeoMarkerViewAdapter:(PKTMarkerViewAdapter *)geoViewAdapter
                          andMapViewAdapter:(PKTMarkerViewAdapter *)mapViewAdapter;

/*! \brief disable Geo Augmented Reality and leave only Google Maps View on screen
 *
 */
-(void)DisableGeoAR;

/*! \brief enable Geo Augmented Reality with Google Maps switching when device
 * is floor-aligned
 *
 */
-(void)EnableGeoAR;

/*! \brief is Full Geo Augmented Reality enabled
 *
 */
- (bool)IsGeoAREnabled;

/*! \brief disable Google Maps view and leave only Geo Augmented Reality screen
 *
 */
-(void)DisableGeoMap;

/*! \brief enable Google Maps view screen (with or without Geo Augmented Reality screen)
 *
 */
-(void)EnableGeoMap;

/*! \brief is Google Maps enabled
 *
 */
- (bool)IsGeoMapEnabled;

/*! \brief SetLocationUpdateParametersMinTime:andMinDistance:
 *
 */
-(void)SetLocationUpdateParametersMinTime:(long)minTime
                           andMinDistance:(float)minDistance;

@end
