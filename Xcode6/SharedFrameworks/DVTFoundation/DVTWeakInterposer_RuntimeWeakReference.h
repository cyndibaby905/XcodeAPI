

#import <DVTFoundation/DVTWeakInterposer.h>

@interface DVTWeakInterposer_RuntimeWeakReference : DVTWeakInterposer
{
    id _representedObject;
}

@property __weak id representedObject; // @synthesize representedObject=_representedObject;

@end

