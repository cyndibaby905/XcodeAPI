

#import <Foundation/Foundation.h>

@class NSDictionary, NSSet;

@interface DVTDeveloperPortalResponseWrapper : NSObject
{
    NSDictionary *_responseDictionary;
    NSSet *_guaranteedComprehensiveResponseKeys;
}

+ (id)responseWrapperWithResponseDictionary:(id)arg1 guaranteedComprehensiveResponseKeys:(id)arg2;
@property(readonly, nonatomic) NSSet *guaranteedComprehensiveResponseKeys; // @synthesize guaranteedComprehensiveResponseKeys=_guaranteedComprehensiveResponseKeys;
@property(readonly, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
- (id)initWithResponseDictionary:(id)arg1 guaranteedComprehensiveResponseKeys:(id)arg2;

@end

