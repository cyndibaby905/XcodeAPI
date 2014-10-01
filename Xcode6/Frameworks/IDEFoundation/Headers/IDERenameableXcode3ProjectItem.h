

#import <Foundation/Foundation.h>

@class NSString;

@interface IDERenameableXcode3ProjectItem : NSObject
{
    id _associatedObject;
    NSString *_nameContext;
}

@property(copy) NSString *nameContext; // @synthesize nameContext=_nameContext;
@property(retain) id associatedObject; // @synthesize associatedObject=_associatedObject;

@end

