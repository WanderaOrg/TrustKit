//
//  TrustKit+Private.h
//  TrustKit
//
//  Created by Eric on 30/03/15.
//  Copyright (c) 2015 Data Theorem. All rights reserved.
//

#import <UIKit/UIKit.h>

#ifndef TrustKit_TrustKit_Private____FILEEXTENSION___
#define TrustKit_TrustKit_Private____FILEEXTENSION___


BOOL verifyCertificatePin(SecTrustRef serverTrust, NSString *serverName);


@interface TKSettings : NSObject

+ (NSDictionary *)publicKeyPins;
+ (BOOL)setPublicKeyPins:(NSDictionary *)publicKeyPins;
+ (NSData *)defaultRsaAsn1Header;
+ (void)setDefaultRsaAsn1Header:(NSData *)defaultASN1Header;

@end


#endif
