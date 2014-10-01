

#import <Foundation/Foundation.h>

@class NSString;

@interface IDESchemeActionAbstractTestSummaryObject : NSObject
{
    NSString *_name;
}

@property(copy) NSString *name; // @synthesize name=_name;
- (NSString *)description;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long status;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithName:(id)arg1;

@end

