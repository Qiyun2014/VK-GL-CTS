/* WARNING: This is auto-generated file. Do not modify, since changes will
 * be lost! Modify the generating script instead.
 */
DestroyDeviceFunc									destroyDevice;
GetGlobalExtensionPropertiesFunc					getGlobalExtensionProperties;
GetPhysicalDeviceExtensionPropertiesFunc			getPhysicalDeviceExtensionProperties;
GetGlobalLayerPropertiesFunc						getGlobalLayerProperties;
GetPhysicalDeviceLayerPropertiesFunc				getPhysicalDeviceLayerProperties;
GetDeviceQueueFunc									getDeviceQueue;
QueueSubmitFunc										queueSubmit;
QueueWaitIdleFunc									queueWaitIdle;
DeviceWaitIdleFunc									deviceWaitIdle;
AllocMemoryFunc										allocMemory;
FreeMemoryFunc										freeMemory;
MapMemoryFunc										mapMemory;
UnmapMemoryFunc										unmapMemory;
FlushMappedMemoryRangesFunc							flushMappedMemoryRanges;
InvalidateMappedMemoryRangesFunc					invalidateMappedMemoryRanges;
GetDeviceMemoryCommitmentFunc						getDeviceMemoryCommitment;
BindBufferMemoryFunc								bindBufferMemory;
BindImageMemoryFunc									bindImageMemory;
GetBufferMemoryRequirementsFunc						getBufferMemoryRequirements;
GetImageMemoryRequirementsFunc						getImageMemoryRequirements;
GetImageSparseMemoryRequirementsFunc				getImageSparseMemoryRequirements;
GetPhysicalDeviceSparseImageFormatPropertiesFunc	getPhysicalDeviceSparseImageFormatProperties;
QueueBindSparseBufferMemoryFunc						queueBindSparseBufferMemory;
QueueBindSparseImageOpaqueMemoryFunc				queueBindSparseImageOpaqueMemory;
QueueBindSparseImageMemoryFunc						queueBindSparseImageMemory;
CreateFenceFunc										createFence;
DestroyFenceFunc									destroyFence;
ResetFencesFunc										resetFences;
GetFenceStatusFunc									getFenceStatus;
WaitForFencesFunc									waitForFences;
CreateSemaphoreFunc									createSemaphore;
DestroySemaphoreFunc								destroySemaphore;
QueueSignalSemaphoreFunc							queueSignalSemaphore;
QueueWaitSemaphoreFunc								queueWaitSemaphore;
CreateEventFunc										createEvent;
DestroyEventFunc									destroyEvent;
GetEventStatusFunc									getEventStatus;
SetEventFunc										setEvent;
ResetEventFunc										resetEvent;
CreateQueryPoolFunc									createQueryPool;
DestroyQueryPoolFunc								destroyQueryPool;
GetQueryPoolResultsFunc								getQueryPoolResults;
CreateBufferFunc									createBuffer;
DestroyBufferFunc									destroyBuffer;
CreateBufferViewFunc								createBufferView;
DestroyBufferViewFunc								destroyBufferView;
CreateImageFunc										createImage;
DestroyImageFunc									destroyImage;
GetImageSubresourceLayoutFunc						getImageSubresourceLayout;
CreateImageViewFunc									createImageView;
DestroyImageViewFunc								destroyImageView;
CreateAttachmentViewFunc							createAttachmentView;
DestroyAttachmentViewFunc							destroyAttachmentView;
CreateShaderModuleFunc								createShaderModule;
DestroyShaderModuleFunc								destroyShaderModule;
CreateShaderFunc									createShader;
DestroyShaderFunc									destroyShader;
CreatePipelineCacheFunc								createPipelineCache;
DestroyPipelineCacheFunc							destroyPipelineCache;
GetPipelineCacheSizeFunc							getPipelineCacheSize;
GetPipelineCacheDataFunc							getPipelineCacheData;
MergePipelineCachesFunc								mergePipelineCaches;
CreateGraphicsPipelinesFunc							createGraphicsPipelines;
CreateComputePipelinesFunc							createComputePipelines;
DestroyPipelineFunc									destroyPipeline;
CreatePipelineLayoutFunc							createPipelineLayout;
DestroyPipelineLayoutFunc							destroyPipelineLayout;
CreateSamplerFunc									createSampler;
DestroySamplerFunc									destroySampler;
CreateDescriptorSetLayoutFunc						createDescriptorSetLayout;
DestroyDescriptorSetLayoutFunc						destroyDescriptorSetLayout;
CreateDescriptorPoolFunc							createDescriptorPool;
DestroyDescriptorPoolFunc							destroyDescriptorPool;
ResetDescriptorPoolFunc								resetDescriptorPool;
AllocDescriptorSetsFunc								allocDescriptorSets;
UpdateDescriptorSetsFunc							updateDescriptorSets;
CreateDynamicViewportStateFunc						createDynamicViewportState;
DestroyDynamicViewportStateFunc						destroyDynamicViewportState;
CreateDynamicRasterStateFunc						createDynamicRasterState;
DestroyDynamicRasterStateFunc						destroyDynamicRasterState;
CreateDynamicColorBlendStateFunc					createDynamicColorBlendState;
DestroyDynamicColorBlendStateFunc					destroyDynamicColorBlendState;
CreateDynamicDepthStencilStateFunc					createDynamicDepthStencilState;
DestroyDynamicDepthStencilStateFunc					destroyDynamicDepthStencilState;
CreateFramebufferFunc								createFramebuffer;
DestroyFramebufferFunc								destroyFramebuffer;
CreateRenderPassFunc								createRenderPass;
DestroyRenderPassFunc								destroyRenderPass;
GetRenderAreaGranularityFunc						getRenderAreaGranularity;
CreateCommandPoolFunc								createCommandPool;
DestroyCommandPoolFunc								destroyCommandPool;
ResetCommandPoolFunc								resetCommandPool;
CreateCommandBufferFunc								createCommandBuffer;
DestroyCommandBufferFunc							destroyCommandBuffer;
BeginCommandBufferFunc								beginCommandBuffer;
EndCommandBufferFunc								endCommandBuffer;
ResetCommandBufferFunc								resetCommandBuffer;
CmdBindPipelineFunc									cmdBindPipeline;
CmdBindDynamicViewportStateFunc						cmdBindDynamicViewportState;
CmdBindDynamicRasterStateFunc						cmdBindDynamicRasterState;
CmdBindDynamicColorBlendStateFunc					cmdBindDynamicColorBlendState;
CmdBindDynamicDepthStencilStateFunc					cmdBindDynamicDepthStencilState;
CmdBindDescriptorSetsFunc							cmdBindDescriptorSets;
CmdBindIndexBufferFunc								cmdBindIndexBuffer;
CmdBindVertexBuffersFunc							cmdBindVertexBuffers;
CmdDrawFunc											cmdDraw;
CmdDrawIndexedFunc									cmdDrawIndexed;
CmdDrawIndirectFunc									cmdDrawIndirect;
CmdDrawIndexedIndirectFunc							cmdDrawIndexedIndirect;
CmdDispatchFunc										cmdDispatch;
CmdDispatchIndirectFunc								cmdDispatchIndirect;
CmdCopyBufferFunc									cmdCopyBuffer;
CmdCopyImageFunc									cmdCopyImage;
CmdBlitImageFunc									cmdBlitImage;
CmdCopyBufferToImageFunc							cmdCopyBufferToImage;
CmdCopyImageToBufferFunc							cmdCopyImageToBuffer;
CmdUpdateBufferFunc									cmdUpdateBuffer;
CmdFillBufferFunc									cmdFillBuffer;
CmdClearColorImageFunc								cmdClearColorImage;
CmdClearDepthStencilImageFunc						cmdClearDepthStencilImage;
CmdClearColorAttachmentFunc							cmdClearColorAttachment;
CmdClearDepthStencilAttachmentFunc					cmdClearDepthStencilAttachment;
CmdResolveImageFunc									cmdResolveImage;
CmdSetEventFunc										cmdSetEvent;
CmdResetEventFunc									cmdResetEvent;
CmdWaitEventsFunc									cmdWaitEvents;
CmdPipelineBarrierFunc								cmdPipelineBarrier;
CmdBeginQueryFunc									cmdBeginQuery;
CmdEndQueryFunc										cmdEndQuery;
CmdResetQueryPoolFunc								cmdResetQueryPool;
CmdWriteTimestampFunc								cmdWriteTimestamp;
CmdCopyQueryPoolResultsFunc							cmdCopyQueryPoolResults;
CmdPushConstantsFunc								cmdPushConstants;
CmdBeginRenderPassFunc								cmdBeginRenderPass;
CmdNextSubpassFunc									cmdNextSubpass;
CmdEndRenderPassFunc								cmdEndRenderPass;
CmdExecuteCommandsFunc								cmdExecuteCommands;
