//
//  SCMCMouseListener.h
//  Sculpt Control Inject Bundle
//
//  Created by Maxim Naumov on 11.07.15.
//  Copyright (c) 2015 Maxim Naumov. All rights reserved.
//

@import Foundation;

@class SCMCConfiguration;

typedef void(^SCMCAction)(void);

typedef NS_ENUM(NSInteger, ListenerKind) {
    HidListenerKind,
    EventTapListenerKind,
};

@interface SCMCMouseListener : NSObject

+ (instancetype)createListenerForConfiguration:(SCMCConfiguration *)configuration;

@end
