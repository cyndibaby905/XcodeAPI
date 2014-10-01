

#import <DVTFoundation/DVTWeakInterposer_ProxyHelperReference.h>

@interface DVTAssertingWeakInterposer_ProxyHelperReference : DVTWeakInterposer_ProxyHelperReference
{
    Class representedObjectClass;
    void *representedObjectAddress;
}

@property void *representedObjectAddress; // @synthesize representedObjectAddress;
@property Class representedObjectClass; // @synthesize representedObjectClass;
- (void)_customSetup;
- (id)representedObject;

@end

