//
//  DCCInfoViewController.h
//  Discord Classic
//
//  Created by Defne on 12/11/23.
//  Copyright (c) 2023 Julian Triveri. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DCCInfoViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) IBOutlet UITableView *tableView;

@end
