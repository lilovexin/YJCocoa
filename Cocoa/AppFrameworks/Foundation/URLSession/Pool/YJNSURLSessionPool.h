//
//  YJNSURLSessionPool.h
//  YJFoundation
//
//  HomePage:https://github.com/937447974/YJCocoa
//  YJ技术支持群:557445088
//
//  Created by 阳君 on 2016/11/30.
//  Copyright © 2016年 YJCocoa. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YJNSSingleton.h"

NS_ASSUME_NONNULL_BEGIN

/** 共享网络会话池*/
#define YJNSURLSessionPoolS YJNSSingletonS(YJNSURLSessionPool, nil)

/** 网络会话池*/
@interface YJNSURLSessionPool : NSObject

/**
 *  @abstract 存储
 *  @discusstion NSMutableDictionary<YJNSURLRequest.identifier, YJNSURLSessionTask>
 */
@property (nonatomic, strong) NSMutableDictionary *poolDict;

@end

NS_ASSUME_NONNULL_END
