

#import <Foundation/Foundation.h>

@interface DVTWeakReference : NSObject
{
    id _representedObject;
}

+ (id)weakReferenceForRepresentedObject:(id)arg1;
@property(retain) id representedObject; // @synthesize representedObject=_representedObject;

@end

