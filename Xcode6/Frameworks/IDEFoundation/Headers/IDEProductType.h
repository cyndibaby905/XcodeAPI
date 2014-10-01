

#import <Foundation/Foundation.h>

@class DVTPlatform, NSString;

@interface IDEProductType : NSObject
{
}

+ (id)productTypeForIdentifier:(id)arg1 platform:(id)arg2;
- (BOOL)isAppExtension;
- (BOOL)isApplication;
@property(readonly) IDEProductType *superType;
@property(readonly) DVTPlatform *platform;
@property(readonly) NSString *localizedDescription;
@property(readonly) NSString *name;
@property(readonly) NSString *identifier;

@end

