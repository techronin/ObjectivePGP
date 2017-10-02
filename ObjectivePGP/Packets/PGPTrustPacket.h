//
//  PGPTrustPacket.h
//  ObjectivePGP
//
//  Created by Marcin Krzyzanowski on 06/05/14.
//  Copyright (c) 2014 Marcin Krzyżanowski. All rights reserved.
//
//  Tag 12

#import "PGPPacketFactory.h"
#import <Foundation/Foundation.h>

@interface PGPTrustPacket : PGPPacket <NSCopying>

@property (nonatomic, copy, readonly) NSData *data;

@end
