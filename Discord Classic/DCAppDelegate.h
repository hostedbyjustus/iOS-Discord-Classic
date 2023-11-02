//
//  DCAppDelegate.h
//  Discord Classic
//
//  Created by Julian Triveri on 3/2/18.
//  Copyright (c) 2018 Julian Triveri. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DCAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, strong) NSMutableArray *notificationQueue;
@property (nonatomic, assign) BOOL isNotificationDisplayed;
@property (nonatomic, assign) NSInteger notificationsBeingDisplayedCount;


@end
