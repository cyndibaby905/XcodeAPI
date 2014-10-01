

#import <DVTFoundation/DVTWeakInterposer_RuntimeWeakReference.h>

@interface DVTAssertingWeakInterposer_RuntimeWeakReference : DVTWeakInterposer_RuntimeWeakReference
{
    Class representedObjectClass;
    void *representedObjectAddress;
}

@property void *representedObjectAddress; // @synthesize representedObjectAddress;
@property Class representedObjectClass; // @synthesize representedObjectClass;
- (void)_customSetup;
- (void)setRepresentedObject:(id)arg1;
- (id)representedObject;

@end
