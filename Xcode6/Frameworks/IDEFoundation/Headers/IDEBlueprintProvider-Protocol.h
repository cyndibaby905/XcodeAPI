

#import <Foundation/Foundation.h>

@class NSArray, NSString;

@protocol IDETestableProvider;

@protocol IDEBlueprintProvider <NSObject>
- (id <IDETestableProvider>)testableProvider;
- (id <IDEBlueprint>)blueprintForName:(NSString *)arg1;
- (id <IDEBlueprint>)blueprintForIdentifier:(NSString *)arg1;
- (NSString *)classPrefix;
- (NSString *)organizationName;
- (NSString *)name;
- (NSArray *)blueprints;
@end

