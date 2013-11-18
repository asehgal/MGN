//
//  MKBlockAdditions.h
//  UIKitCategoryAdditions
//
//  Created by Abhimanu on 13/04/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

typedef void (^VoidBlock)();

typedef void (^DismissBlock)(int buttonIndex);
typedef void (^CancelBlock)();
typedef void (^PhotoPickedBlock)(UIImage *chosenImage);

#define kPhotoActionSheetTag 10000