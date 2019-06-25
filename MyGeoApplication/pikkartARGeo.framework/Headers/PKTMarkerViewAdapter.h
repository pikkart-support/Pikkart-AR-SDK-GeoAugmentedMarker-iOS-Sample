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
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "PKTGeoElement.h"

/**
 * \class PKTMarkerViewAdapter
 * \brief
 *
 * PKTMarkerViewAdapter defines some callbacks used for customize view showed
 * on point of interests.
 *
 */
@interface PKTMarkerViewAdapter : NSObject

/*! \brief create a PKTMarkerViewAdapter object with specified size
 *
 *  \param size marker view size
 */
-(instancetype)initWithSize:(CGSize)size;

/*! \brief set default marker view
 *
 *  \param view default view
 */
-(void)setMarkerView:(UIView *)view;

/*! \brief get view associated to geoElement
 *
 *  \param geoElement associated to point of interest
 */
-(UIView *)getView:(PKTGeoElement *)geoElement;

/*! \brief get selected view associated to geoElement
 *
 *  \param geoElement associated to point of interest
 */
-(UIView *)getSelectedView:(PKTGeoElement *)geoElement;

@end
