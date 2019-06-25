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

/**
 * \class PKTGeoLocation
 * \brief PKTGeoLocation models point of interest geographic coordinates
 *
 */
@interface PKTGeoLocation : NSObject

/*! \brief create and initialize PKTGeoLocation object
 *  \param latitudine point of interest latitudine in radians
 *  \param longitudine point of interest longitudine in radians
 *  \param altitudine point of interest altitudine in meters
 *  \return a PKTGeoLocation object
 */
-(instancetype)initWithLatitudine:(double)latitudine
                   andLongitudine:(double)longitudine
                    andAltitudine:(double)altitudine;

/*! \brief Get latitudine parameter
 *
 *  \return double
 */
@property (nonatomic) double latitudine;
/*! \brief Get longitudine parameter
 *
 *  \return double
 */
@property (nonatomic) double longitudine;
/*! \brief Get altitudine parameter
 *
 *  \return double
 */
@property (nonatomic) double altitudine;

@end
