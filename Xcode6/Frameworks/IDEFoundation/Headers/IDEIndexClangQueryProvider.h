

#import <IDEFoundation/IDEIndexGenericQueryProvider.h>

@class DVTDispatchLock, DVTTextDocumentLocation, NSArray, NSString;

@interface IDEIndexClangQueryProvider : IDEIndexGenericQueryProvider

+ (BOOL)supportsSymbolColoring;
+ (void)initialize;
- (id)impliedHeadersForModuleImportLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)importedFileAtDocumentLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)importedFilesAtDocument:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)collectionElementTypeSymbolForSymbol:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)typeSymbolForSymbol:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
//- (id)typeSymbolForCXType:(CDStruct_9b248d9b)arg1;
- (id)messageReceiverInContext:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)referencesToSymbolMatchingName:(id)arg1 inContext:(id)arg2 withCurrentFileContentDictionary:(id)arg3 forIndex:(id)arg4;
- (id)referencesToSymbol:(id)arg1 inContext:(id)arg2 withCurrentFileContentDictionary:(id)arg3 forIndex:(id)arg4;
- (id)symbolsUsedInContext:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)symbolsOccurrencesInContext:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
//- (BOOL)_setOccurrenceForCursor:(CDStruct_a94d320b)arg1 symbol:(id)arg2 index:(id)arg3;
- (id)processedSymbolsInContext:(id)arg1 initFunction:(CDUnknownBlockType)arg2 visitorFunction:(CDUnknownBlockType)arg3 includeSymbolLocations:(BOOL)arg4 withCurrentFileContentDictionary:(id)arg5 forIndex:(id)arg6;
- (id)codeDiagnosticsAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)parsedCodeCommentAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)_diagnosticItemsFromDiagnosticSet:(void *)arg1 parentDiagnostic:(void *)arg2 location:(id)arg3 forIndex:(id)arg4;
- (id)codeCompletionsAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 completionContext:(id *)arg3 forIndex:(id)arg4;
- (id)symbolsMatchingName:(id)arg1 inContext:(id)arg2 withCurrentFileContentDictionary:(id)arg3 forIndex:(id)arg4;
- (id)_symbolsMatchingName:(id)arg1 inContext:(id)arg2 cxTU:(struct CXTranslationUnitImpl *)arg3 forIndex:(id)arg4;
- (id)symbolsMatchingName:(id)arg1 inContext:(id)arg2 forIndex:(id)arg3;
//- (id)_resolutionForCursor:(CDStruct_a94d320b)arg1;
- (void)_createSharedTranslationUnitWithCurrentFileContentDictionary:(id)arg1 index:(id)arg2;
- (id)_canonicalPathForFile:(void *)arg1 index:(id)arg2;
- (id)_canonicalPathForPath:(id)arg1 index:(id)arg2;
- (void)_logClangInvocationWithArguments:(id)arg1;
- (id)pchFile;
- (void)purgeCaches;
- (BOOL)hasAST;
- (void)dealloc;
- (void)disposeCIndexAndTU;
- (void)disposeTokensAndCursors;
- (void)performCompletion:(CDUnknownBlockType)arg1;
- (void)asyncPerformClang:(CDUnknownBlockType)arg1;
- (void)performClang:(CDUnknownBlockType)arg1;
- (void)processCompletions;
- (id)initWithSettings:(id)arg1 database:(id)arg2;

@end

