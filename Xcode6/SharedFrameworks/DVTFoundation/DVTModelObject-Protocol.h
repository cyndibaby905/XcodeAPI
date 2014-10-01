

#import <Foundation/Foundation.h>

@class DVTModelObjectGraph;

@protocol DVTModelObject <NSObject>
@property(readonly, nonatomic) DVTModelObjectGraph *objectGraph;
@end

