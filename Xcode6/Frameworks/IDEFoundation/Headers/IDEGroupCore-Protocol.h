

#import <IDEFoundation/IDEContainerItemCore.h>

@class NSArray, NSString;

@protocol IDEGroupCore <IDEContainerItemCore>
@property(copy) NSArray *subitems;
@property(copy) NSString *name;
@property(retain) id <IDEContainerCore> parentContainer;
@end

