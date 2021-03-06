//
//  ContactManager.h
//  FaceRecognition
//
//  Created by Remi Robert on 11/06/16.
//  Copyright © 2016 Remi Robert. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ContactModel.h"

@interface ContactManager : NSObject
+ (void)fetchContacts:(void (^)(NSArray<ContactModel *> *))completion;
+ (void)fetchWithId:(NSString *)id completion:(void (^)(ContactModel *))completion;
@end
