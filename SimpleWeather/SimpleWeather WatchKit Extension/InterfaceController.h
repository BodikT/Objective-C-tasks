//
//  InterfaceController.h
//  SimpleWeather WatchKit Extension
//
//  Created by Simon Ng on 12/8/15.
//  Copyright (c) 2015 AppCoda. All rights reserved.
//

#import <WatchKit/WatchKit.h>
#import <Foundation/Foundation.h>

@interface InterfaceController : WKInterfaceController
@property (weak, nonatomic) IBOutlet WKInterfaceLabel *weatherType;
@property (weak, nonatomic) IBOutlet WKInterfaceImage *weatherImage;
- (IBAction)updateAction;

@end
