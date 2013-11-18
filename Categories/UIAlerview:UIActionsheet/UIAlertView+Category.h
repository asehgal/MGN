//
//  UIAlertView+Category.h
//  TextSmartController
//
//  Created by Abhimanu on 13/04/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AJBlockAdditions.h"

@interface UIAlertView (Block) <UIAlertViewDelegate> 
+ (UIAlertView*) alertViewWithTitle:(NSString*) title 
                            message:(NSString*) message;

+ (UIAlertView*) alertViewWithTitle:(NSString*) title 
                            message:(NSString*) message
                  cancelButtonTitle:(NSString*) cancelButtonTitle;

+ (UIAlertView*) alertViewWithTitle:(NSString*) title                    
                            message:(NSString*) message 
                  cancelButtonTitle:(NSString*) cancelButtonTitle
                  otherButtonTitles:(NSArray*) otherButtons
                          onDismiss:(DismissBlock) dismissed                   
                           onCancel:(CancelBlock) cancelled;

@end

