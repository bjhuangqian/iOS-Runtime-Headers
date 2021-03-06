/* Generated by RuntimeBrowser.
 */

@protocol TSKExporter <NSObject>

@required

- (void)cancel;
- (BOOL)exportToURL:(NSURL *)arg1 delegate:(id <TSKImportExportDelegate>)arg2 error:(id*)arg3;
- (id)initWithDocumentRoot:(TSKDocumentRoot *)arg1;
- (BOOL)isCancelled;
- (TSUProgressContext *)progressContext;
- (void)quit;
- (void)setProgressContext:(TSUProgressContext *)arg1;

@optional

- (NSString *)documentSpecificTypeUTI;
- (void)enableRenderAllContent;
- (NSString *)exportPathForOutputPath:(NSString *)arg1;
- (BOOL)isExportSupported;
- (BOOL)needsSupplementalFiles;
- (TSUProgress *)progress;
- (NSString *)savePanelMessage;
- (void)setBuildVersionHistory:(NSArray *)arg1;
- (void)setOptions:(NSDictionary *)arg1;
- (void)setQuickLookThumbnail:(TSUImage *)arg1;
- (void)setSaveToURL:(NSURL *)arg1;
- (void)setTypeUTI:(NSString *)arg1;
- (void)setUsePackageFormat:(BOOL)arg1;
- (NSString *)typeUTI;

@end
