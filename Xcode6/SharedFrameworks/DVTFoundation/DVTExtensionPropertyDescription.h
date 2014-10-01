

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTPropertyListEncoding-Protocol.h>

@class NSString;

@interface DVTExtensionPropertyDescription : NSObject <DVTPropertyListEncoding>
{
    NSString *_name;
    BOOL _isOptional;
}

@property(getter=isOptional) BOOL optional; // @synthesize optional=_isOptional;
@property(copy) NSString *name; // @synthesize name=_name;
- (void)encodeIntoPropertyList:(id)arg1;
- (void)awakeWithPropertyList:(id)arg1;
- (id)initWithPropertyList:(id)arg1 owner:(id)arg2;
- (id)initWithName:(id)arg1 isOptional:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

