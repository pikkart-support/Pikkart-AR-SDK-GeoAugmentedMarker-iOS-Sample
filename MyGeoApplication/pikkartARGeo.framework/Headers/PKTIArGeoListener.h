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

#import <UIKit/UIKit.h>


/**
 * \protocol PKTIArGeoListener
 * \brief 
 *
 * PKTIArGeoListener defines some callback used for tracing user interaction
 * on point of interests.
 *
 */
@protocol PKTIArGeoListener<NSObject>

@required

/*! \brief called when user touch a point of interest
 *
 *  \param geoElement generic geoElement associated to point of interest. It could be PKTGeoElement class
 *  \param view     UIView that received the touch
 *
 */
-(void)onGeoElement:(id)geoElement Click:(UIView *)view;

/*! \brief called when user touch outside any point of interest
 *
 *
 */
-(void)onMapOrCameraClicked;

/*! \brief called when user position changes
 *
 *  \param location new user Location. It could be PKTGeoLocation class
 *
 */
-(void)onGeoLocationChanged:(id) location;

@end
