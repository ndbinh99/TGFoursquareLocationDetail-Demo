//
//  ViewController.h
//  TGFoursquareLocationDetail-Demo
//
//  Created by Thibault Guégan on 15/12/2013.
//  Copyright (c) 2013 Thibault Guégan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TGFoursquareLocationDetail.h"

@interface ViewController : UIViewController <UITableViewDataSource,UITableViewDelegate,TGFoursquareLocationDetailDelegate>

@property (nonatomic, strong) TGFoursquareLocationDetail *locationDetail;

@end
