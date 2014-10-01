

#import <Foundation/Foundation.h>

@class DVTFilePath, IDEIndex, IDEIndexImportSession, IDEIndexingEngine, NSDictionary, NSSet, NSString;

@interface IDEIndexingJob : NSObject
{
    IDEIndexingEngine *_engine;
    id <IDEIndexable> _indexable;
    DVTFilePath *_file;
    NSSet *_dirtyFiles;
    IDEIndexImportSession *_session;
    NSDictionary *_settings;
    BOOL _canceled;
    BOOL _completed;
    BOOL _deferred;
    BOOL _treatAsDeferred;
    BOOL _onHold;
    BOOL _highPriority;
    NSSet *_oldDirtyFiles;
}

+ (void)initialize;
@property(readonly, nonatomic) NSSet *oldDirtyFiles; // @synthesize oldDirtyFiles=_oldDirtyFiles;
@property(nonatomic, getter=isHighPriority) BOOL highPriority; // @synthesize highPriority=_highPriority;
@property(nonatomic, getter=isOnHold) BOOL onHold; // @synthesize onHold=_onHold;
@property(nonatomic, getter=isDeferred) BOOL deferred; // @synthesize deferred=_deferred;
@property(retain, nonatomic) NSDictionary *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) IDEIndexImportSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) NSSet *dirtyFiles; // @synthesize dirtyFiles=_dirtyFiles;
@property(readonly, nonatomic) DVTFilePath *file; // @synthesize file=_file;
@property(readonly, nonatomic) id <IDEIndexable> indexable; // @synthesize indexable=_indexable;
@property(readonly, nonatomic) __weak IDEIndexingEngine *engine; // @synthesize engine=_engine;
- (void)didCompleteWithLanguage:(id)arg1 pch:(BOOL)arg2;
- (void)didComplete;
- (BOOL)shouldContinue;
- (id)newMainFileWithSource:(id)arg1 modified:(id)arg2;
- (void)indexFile:(id)arg1 indexable:(id)arg2;
- (void)cancel;
- (void)run;
- (void)treatAsDeferred;
@property(readonly, nonatomic, getter=isModuleJob) BOOL moduleJob;
@property(readonly, nonatomic) NSString *target;
@property(readonly, nonatomic) IDEIndex *index;
- (void)addDirtyFile:(id)arg1;
- (id)initWithEngine:(id)arg1 indexable:(id)arg2 file:(id)arg3;
- (id)initWithEngine:(id)arg1 indexable:(id)arg2;

@end
