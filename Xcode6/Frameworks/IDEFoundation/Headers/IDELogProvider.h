

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSArray, NSString;

@interface IDELogProvider : NSObject <DVTInvalidation>
{
    id _domainItem;
}

+ (void)initialize;
@property(readonly) id domainItem; // @synthesize domainItem=_domainItem;
- (id)ideModelObjectTypeIdentifier;
@property(readonly) NSArray *logRecords;
- (void)primitiveInvalidate;
- (id)initWithDomainItem:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

