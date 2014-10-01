

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTObservingToken, DVTStackBacktrace, IDEGroup;

@protocol IDELocalizedGroup;

@interface IDENotifyingLocalizedGroup : NSObject <DVTInvalidation>
{
    IDEGroup<IDELocalizedGroup> *_group;
    NSDictionary *_variantFileReferences;
    DVTObservingToken *_subitemsObservationToken;
    DVTObservingToken *_resolvedFilePathObservationToken;
}

+ (id)keyPathsForValuesAffectingAvailableLanguages;
+ (id)keyPathsForValuesAffectingDevelopmentFileReference;
+ (id)keyPathsForValuesAffectingBaseFileReference;
+ (void)initialize;
- (id)availableLanguagesForFileReferencesConformingToType:(id)arg1;
- (id)availableLanguages;
- (id)targetLanguages;
- (id)developmentLanguage;
- (id)fileReferenceForLanguage:(id)arg1;
- (id)developmentFileReference;
- (id)baseFileReference;
- (id)group;
- (void)primitiveInvalidate;
- (void)_update;
- (id)initWithLocalizedGroup:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

