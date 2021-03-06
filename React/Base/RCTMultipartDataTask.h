/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <Foundation/Foundation.h>
#import "RCTMultipartStreamReader.h"

typedef void (^RCTMultipartDataTaskCallback)(NSInteger statusCode, NSDictionary *headers, NSData *content, NSError *error, BOOL done);

@interface RCTMultipartDataTask : NSObject

- (instancetype)initWithURL:(NSURL *)url partHandler:(RCTMultipartDataTaskCallback)partHandler;
- (void)startTask;

@end
