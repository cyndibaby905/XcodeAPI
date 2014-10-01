

#import <Foundation/Foundation.h>

@class NSString;

@interface IDETestingSystem : NSObject
{
    NSString *_name;
    NSString *_identifier;
    Class _testableClass;
}

+ (id)testingSystems;
+ (id)testingSystemForIdentifier:(id)arg1;
+ (id)_testingSystemForExtension:(id)arg1;
+ (void)initialize;
@property(readonly) Class testableClass; // @synthesize testableClass=_testableClass;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (NSString *)description;
- (id)initWithTestingSystemExtension:(id)arg1;

@end

