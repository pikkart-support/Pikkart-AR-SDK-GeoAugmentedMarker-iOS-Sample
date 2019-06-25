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
#import "PKTGeoLocation.h"

/*! \brief enum PKTGeoElementVisibility
 */
typedef NS_ENUM(int, PKTGeoElementVisibility) {
    ON_MAP = 0, /*!< pkt geo element marker only on maps */
    ON_AUGMENTED_REALITY, /*!< pkt geo element marker only on augmented reality */
    ON_NEITHER, /*!< pkt geo element marker not visible */
    ON_ALL /*!< pkt geo element marker visible either on maps and augmented reality */
};

#define PKTGeoElementOnMap(visibility) (((visibility)==ON_MAP) ||\
                                         (visibility)==ON_ALL)
#define PKTGeoElementOnAR(visibility)  (((visibility)==ON_AUGMENTED_REALITY) ||\
                                         (visibility)==ON_ALL)

/**
 * \class PKTGeoElement
 * \brief
 *
 * PKTGeoElement models information associated to a point of interest
 * showed either on camera or Google Maps.
 */
@interface PKTGeoElement : NSObject

/*! \brief create and initialize PKTGeoElement object
 *  \param geoLocation a PKTGeoLocation object
 *  \param Id unique identifier of point of interest
 *  \param name       name of point of interest
 *  \return a PKTGeoLocation object
 */
-(instancetype)initWithLocation:(PKTGeoLocation *)geoLocation
                           andIdLocation:(NSString *)Id
                                 andName:(NSString *)name;

/*! \brief create and initialize PKTGeoElement object
 *  \param geoLocation a PKTGeoLocation object
 *  \param Id unique identifier of point of interest
 *  \param name       name of point of interest
 *  \param visibility  visibility of point of interest (see PKTGeoElementVisibility for allowed values)
 *  \return a PKTGeoLocation object
 */
-(instancetype)initWithLocation:(PKTGeoLocation *)geoLocation
                  andIdLocation:(NSString *)Id
                        andName:(NSString *)name
                        andVisibility:(PKTGeoElementVisibility)visibility;

/*! \brief Get geoLocation parameter
 *
 *  \return PKTGeoLocation object
 */
@property (nonatomic,strong) PKTGeoLocation * geoLocation;
/*! \brief Get idLocation parameter
 *
 *  \return NSString object
 */
@property (nonatomic,strong) NSString * Id;
/*! \brief Get name parameter
 *
 *  \return NSString object
 */
@property (nonatomic,strong) NSString * name;
/*! \brief Get visibility parameter
 *
 *  \return PKTGeoElementVisibility value
 */
@property (nonatomic) PKTGeoElementVisibility visibility;

@end

