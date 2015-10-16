/* WARNING: This is auto-generated file. Do not modify, since changes will
 * be lost! Modify the generating script instead.
 */
typedef VK_APICALL VkResult				(VK_APIENTRY* CreateInstanceFunc)								(const VkInstanceCreateInfo* pCreateInfo, VkInstance* pInstance);
typedef VK_APICALL void					(VK_APIENTRY* DestroyInstanceFunc)								(VkInstance instance);
typedef VK_APICALL VkResult				(VK_APIENTRY* EnumeratePhysicalDevicesFunc)						(VkInstance instance, deUint32* pPhysicalDeviceCount, VkPhysicalDevice* pPhysicalDevices);
typedef VK_APICALL VkResult				(VK_APIENTRY* GetPhysicalDeviceFeaturesFunc)					(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures* pFeatures);
typedef VK_APICALL VkResult				(VK_APIENTRY* GetPhysicalDeviceFormatPropertiesFunc)			(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties* pFormatProperties);
typedef VK_APICALL VkResult				(VK_APIENTRY* GetPhysicalDeviceImageFormatPropertiesFunc)		(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkImageFormatProperties* pImageFormatProperties);
typedef VK_APICALL VkResult				(VK_APIENTRY* GetPhysicalDevicePropertiesFunc)					(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties* pProperties);
typedef VK_APICALL VkResult				(VK_APIENTRY* GetPhysicalDeviceQueueFamilyPropertiesFunc)		(VkPhysicalDevice physicalDevice, deUint32* pCount, VkQueueFamilyProperties* pQueueFamilyProperties);
typedef VK_APICALL VkResult				(VK_APIENTRY* GetPhysicalDeviceMemoryPropertiesFunc)			(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties* pMemoryProperties);
typedef VK_APICALL PFN_vkVoidFunction	(VK_APIENTRY* GetInstanceProcAddrFunc)							(VkInstance instance, const char* pName);
typedef VK_APICALL PFN_vkVoidFunction	(VK_APIENTRY* GetDeviceProcAddrFunc)							(VkDevice device, const char* pName);
typedef VK_APICALL VkResult				(VK_APIENTRY* CreateDeviceFunc)									(VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo* pCreateInfo, VkDevice* pDevice);
typedef VK_APICALL void					(VK_APIENTRY* DestroyDeviceFunc)								(VkDevice device);
typedef VK_APICALL VkResult				(VK_APIENTRY* EnumerateInstanceExtensionPropertiesFunc)			(const char* pLayerName, deUint32* pCount, VkExtensionProperties* pProperties);
typedef VK_APICALL VkResult				(VK_APIENTRY* EnumerateDeviceExtensionPropertiesFunc)			(VkPhysicalDevice physicalDevice, const char* pLayerName, deUint32* pCount, VkExtensionProperties* pProperties);
typedef VK_APICALL VkResult				(VK_APIENTRY* EnumerateInstanceLayerPropertiesFunc)				(deUint32* pCount, VkLayerProperties* pProperties);
typedef VK_APICALL VkResult				(VK_APIENTRY* EnumerateDeviceLayerPropertiesFunc)				(VkPhysicalDevice physicalDevice, deUint32* pCount, VkLayerProperties* pProperties);
typedef VK_APICALL VkResult				(VK_APIENTRY* GetDeviceQueueFunc)								(VkDevice device, deUint32 queueFamilyIndex, deUint32 queueIndex, VkQueue* pQueue);
typedef VK_APICALL VkResult				(VK_APIENTRY* QueueSubmitFunc)									(VkQueue queue, deUint32 cmdBufferCount, const VkCmdBuffer* pCmdBuffers, VkFence fence);
typedef VK_APICALL VkResult				(VK_APIENTRY* QueueWaitIdleFunc)								(VkQueue queue);
typedef VK_APICALL VkResult				(VK_APIENTRY* DeviceWaitIdleFunc)								(VkDevice device);
typedef VK_APICALL VkResult				(VK_APIENTRY* AllocMemoryFunc)									(VkDevice device, const VkMemoryAllocInfo* pAllocInfo, VkDeviceMemory* pMem);
typedef VK_APICALL void					(VK_APIENTRY* FreeMemoryFunc)									(VkDevice device, VkDeviceMemory mem);
typedef VK_APICALL VkResult				(VK_APIENTRY* MapMemoryFunc)									(VkDevice device, VkDeviceMemory mem, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void** ppData);
typedef VK_APICALL void					(VK_APIENTRY* UnmapMemoryFunc)									(VkDevice device, VkDeviceMemory mem);
typedef VK_APICALL VkResult				(VK_APIENTRY* FlushMappedMemoryRangesFunc)						(VkDevice device, deUint32 memRangeCount, const VkMappedMemoryRange* pMemRanges);
typedef VK_APICALL VkResult				(VK_APIENTRY* InvalidateMappedMemoryRangesFunc)					(VkDevice device, deUint32 memRangeCount, const VkMappedMemoryRange* pMemRanges);
typedef VK_APICALL VkResult				(VK_APIENTRY* GetDeviceMemoryCommitmentFunc)					(VkDevice device, VkDeviceMemory memory, VkDeviceSize* pCommittedMemoryInBytes);
typedef VK_APICALL VkResult				(VK_APIENTRY* BindBufferMemoryFunc)								(VkDevice device, VkBuffer buffer, VkDeviceMemory mem, VkDeviceSize memOffset);
typedef VK_APICALL VkResult				(VK_APIENTRY* BindImageMemoryFunc)								(VkDevice device, VkImage image, VkDeviceMemory mem, VkDeviceSize memOffset);
typedef VK_APICALL VkResult				(VK_APIENTRY* GetBufferMemoryRequirementsFunc)					(VkDevice device, VkBuffer buffer, VkMemoryRequirements* pMemoryRequirements);
typedef VK_APICALL VkResult				(VK_APIENTRY* GetImageMemoryRequirementsFunc)					(VkDevice device, VkImage image, VkMemoryRequirements* pMemoryRequirements);
typedef VK_APICALL VkResult				(VK_APIENTRY* GetImageSparseMemoryRequirementsFunc)				(VkDevice device, VkImage image, deUint32* pNumRequirements, VkSparseImageMemoryRequirements* pSparseMemoryRequirements);
typedef VK_APICALL VkResult				(VK_APIENTRY* GetPhysicalDeviceSparseImageFormatPropertiesFunc)	(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, deUint32 samples, VkImageUsageFlags usage, VkImageTiling tiling, deUint32* pNumProperties, VkSparseImageFormatProperties* pProperties);
typedef VK_APICALL VkResult				(VK_APIENTRY* QueueBindSparseBufferMemoryFunc)					(VkQueue queue, VkBuffer buffer, deUint32 numBindings, const VkSparseMemoryBindInfo* pBindInfo);
typedef VK_APICALL VkResult				(VK_APIENTRY* QueueBindSparseImageOpaqueMemoryFunc)				(VkQueue queue, VkImage image, deUint32 numBindings, const VkSparseMemoryBindInfo* pBindInfo);
typedef VK_APICALL VkResult				(VK_APIENTRY* QueueBindSparseImageMemoryFunc)					(VkQueue queue, VkImage image, deUint32 numBindings, const VkSparseImageMemoryBindInfo* pBindInfo);
typedef VK_APICALL VkResult				(VK_APIENTRY* CreateFenceFunc)									(VkDevice device, const VkFenceCreateInfo* pCreateInfo, VkFence* pFence);
typedef VK_APICALL void					(VK_APIENTRY* DestroyFenceFunc)									(VkDevice device, VkFence fence);
typedef VK_APICALL VkResult				(VK_APIENTRY* ResetFencesFunc)									(VkDevice device, deUint32 fenceCount, const VkFence* pFences);
typedef VK_APICALL VkResult				(VK_APIENTRY* GetFenceStatusFunc)								(VkDevice device, VkFence fence);
typedef VK_APICALL VkResult				(VK_APIENTRY* WaitForFencesFunc)								(VkDevice device, deUint32 fenceCount, const VkFence* pFences, VkBool32 waitAll, deUint64 timeout);
typedef VK_APICALL VkResult				(VK_APIENTRY* CreateSemaphoreFunc)								(VkDevice device, const VkSemaphoreCreateInfo* pCreateInfo, VkSemaphore* pSemaphore);
typedef VK_APICALL void					(VK_APIENTRY* DestroySemaphoreFunc)								(VkDevice device, VkSemaphore semaphore);
typedef VK_APICALL VkResult				(VK_APIENTRY* QueueSignalSemaphoreFunc)							(VkQueue queue, VkSemaphore semaphore);
typedef VK_APICALL VkResult				(VK_APIENTRY* QueueWaitSemaphoreFunc)							(VkQueue queue, VkSemaphore semaphore);
typedef VK_APICALL VkResult				(VK_APIENTRY* CreateEventFunc)									(VkDevice device, const VkEventCreateInfo* pCreateInfo, VkEvent* pEvent);
typedef VK_APICALL void					(VK_APIENTRY* DestroyEventFunc)									(VkDevice device, VkEvent event);
typedef VK_APICALL VkResult				(VK_APIENTRY* GetEventStatusFunc)								(VkDevice device, VkEvent event);
typedef VK_APICALL VkResult				(VK_APIENTRY* SetEventFunc)										(VkDevice device, VkEvent event);
typedef VK_APICALL VkResult				(VK_APIENTRY* ResetEventFunc)									(VkDevice device, VkEvent event);
typedef VK_APICALL VkResult				(VK_APIENTRY* CreateQueryPoolFunc)								(VkDevice device, const VkQueryPoolCreateInfo* pCreateInfo, VkQueryPool* pQueryPool);
typedef VK_APICALL void					(VK_APIENTRY* DestroyQueryPoolFunc)								(VkDevice device, VkQueryPool queryPool);
typedef VK_APICALL VkResult				(VK_APIENTRY* GetQueryPoolResultsFunc)							(VkDevice device, VkQueryPool queryPool, deUint32 startQuery, deUint32 queryCount, deUintptr* pDataSize, void* pData, VkQueryResultFlags flags);
typedef VK_APICALL VkResult				(VK_APIENTRY* CreateBufferFunc)									(VkDevice device, const VkBufferCreateInfo* pCreateInfo, VkBuffer* pBuffer);
typedef VK_APICALL void					(VK_APIENTRY* DestroyBufferFunc)								(VkDevice device, VkBuffer buffer);
typedef VK_APICALL VkResult				(VK_APIENTRY* CreateBufferViewFunc)								(VkDevice device, const VkBufferViewCreateInfo* pCreateInfo, VkBufferView* pView);
typedef VK_APICALL void					(VK_APIENTRY* DestroyBufferViewFunc)							(VkDevice device, VkBufferView bufferView);
typedef VK_APICALL VkResult				(VK_APIENTRY* CreateImageFunc)									(VkDevice device, const VkImageCreateInfo* pCreateInfo, VkImage* pImage);
typedef VK_APICALL void					(VK_APIENTRY* DestroyImageFunc)									(VkDevice device, VkImage image);
typedef VK_APICALL VkResult				(VK_APIENTRY* GetImageSubresourceLayoutFunc)					(VkDevice device, VkImage image, const VkImageSubresource* pSubresource, VkSubresourceLayout* pLayout);
typedef VK_APICALL VkResult				(VK_APIENTRY* CreateImageViewFunc)								(VkDevice device, const VkImageViewCreateInfo* pCreateInfo, VkImageView* pView);
typedef VK_APICALL void					(VK_APIENTRY* DestroyImageViewFunc)								(VkDevice device, VkImageView imageView);
typedef VK_APICALL VkResult				(VK_APIENTRY* CreateShaderModuleFunc)							(VkDevice device, const VkShaderModuleCreateInfo* pCreateInfo, VkShaderModule* pShaderModule);
typedef VK_APICALL void					(VK_APIENTRY* DestroyShaderModuleFunc)							(VkDevice device, VkShaderModule shaderModule);
typedef VK_APICALL VkResult				(VK_APIENTRY* CreateShaderFunc)									(VkDevice device, const VkShaderCreateInfo* pCreateInfo, VkShader* pShader);
typedef VK_APICALL void					(VK_APIENTRY* DestroyShaderFunc)								(VkDevice device, VkShader shader);
typedef VK_APICALL VkResult				(VK_APIENTRY* CreatePipelineCacheFunc)							(VkDevice device, const VkPipelineCacheCreateInfo* pCreateInfo, VkPipelineCache* pPipelineCache);
typedef VK_APICALL void					(VK_APIENTRY* DestroyPipelineCacheFunc)							(VkDevice device, VkPipelineCache pipelineCache);
typedef VK_APICALL deUintptr			(VK_APIENTRY* GetPipelineCacheSizeFunc)							(VkDevice device, VkPipelineCache pipelineCache);
typedef VK_APICALL VkResult				(VK_APIENTRY* GetPipelineCacheDataFunc)							(VkDevice device, VkPipelineCache pipelineCache, void* pData);
typedef VK_APICALL VkResult				(VK_APIENTRY* MergePipelineCachesFunc)							(VkDevice device, VkPipelineCache destCache, deUint32 srcCacheCount, const VkPipelineCache* pSrcCaches);
typedef VK_APICALL VkResult				(VK_APIENTRY* CreateGraphicsPipelinesFunc)						(VkDevice device, VkPipelineCache pipelineCache, deUint32 count, const VkGraphicsPipelineCreateInfo* pCreateInfos, VkPipeline* pPipelines);
typedef VK_APICALL VkResult				(VK_APIENTRY* CreateComputePipelinesFunc)						(VkDevice device, VkPipelineCache pipelineCache, deUint32 count, const VkComputePipelineCreateInfo* pCreateInfos, VkPipeline* pPipelines);
typedef VK_APICALL void					(VK_APIENTRY* DestroyPipelineFunc)								(VkDevice device, VkPipeline pipeline);
typedef VK_APICALL VkResult				(VK_APIENTRY* CreatePipelineLayoutFunc)							(VkDevice device, const VkPipelineLayoutCreateInfo* pCreateInfo, VkPipelineLayout* pPipelineLayout);
typedef VK_APICALL void					(VK_APIENTRY* DestroyPipelineLayoutFunc)						(VkDevice device, VkPipelineLayout pipelineLayout);
typedef VK_APICALL VkResult				(VK_APIENTRY* CreateSamplerFunc)								(VkDevice device, const VkSamplerCreateInfo* pCreateInfo, VkSampler* pSampler);
typedef VK_APICALL void					(VK_APIENTRY* DestroySamplerFunc)								(VkDevice device, VkSampler sampler);
typedef VK_APICALL VkResult				(VK_APIENTRY* CreateDescriptorSetLayoutFunc)					(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, VkDescriptorSetLayout* pSetLayout);
typedef VK_APICALL void					(VK_APIENTRY* DestroyDescriptorSetLayoutFunc)					(VkDevice device, VkDescriptorSetLayout descriptorSetLayout);
typedef VK_APICALL VkResult				(VK_APIENTRY* CreateDescriptorPoolFunc)							(VkDevice device, const VkDescriptorPoolCreateInfo* pCreateInfo, VkDescriptorPool* pDescriptorPool);
typedef VK_APICALL void					(VK_APIENTRY* DestroyDescriptorPoolFunc)						(VkDevice device, VkDescriptorPool descriptorPool);
typedef VK_APICALL VkResult				(VK_APIENTRY* ResetDescriptorPoolFunc)							(VkDevice device, VkDescriptorPool descriptorPool);
typedef VK_APICALL VkResult				(VK_APIENTRY* AllocDescriptorSetsFunc)							(VkDevice device, VkDescriptorPool descriptorPool, VkDescriptorSetUsage setUsage, deUint32 count, const VkDescriptorSetLayout* pSetLayouts, VkDescriptorSet* pDescriptorSets);
typedef VK_APICALL VkResult				(VK_APIENTRY* FreeDescriptorSetsFunc)							(VkDevice device, VkDescriptorPool descriptorPool, deUint32 count, const VkDescriptorSet* pDescriptorSets);
typedef VK_APICALL void					(VK_APIENTRY* UpdateDescriptorSetsFunc)							(VkDevice device, deUint32 writeCount, const VkWriteDescriptorSet* pDescriptorWrites, deUint32 copyCount, const VkCopyDescriptorSet* pDescriptorCopies);
typedef VK_APICALL VkResult				(VK_APIENTRY* CreateFramebufferFunc)							(VkDevice device, const VkFramebufferCreateInfo* pCreateInfo, VkFramebuffer* pFramebuffer);
typedef VK_APICALL void					(VK_APIENTRY* DestroyFramebufferFunc)							(VkDevice device, VkFramebuffer framebuffer);
typedef VK_APICALL VkResult				(VK_APIENTRY* CreateRenderPassFunc)								(VkDevice device, const VkRenderPassCreateInfo* pCreateInfo, VkRenderPass* pRenderPass);
typedef VK_APICALL void					(VK_APIENTRY* DestroyRenderPassFunc)							(VkDevice device, VkRenderPass renderPass);
typedef VK_APICALL VkResult				(VK_APIENTRY* GetRenderAreaGranularityFunc)						(VkDevice device, VkRenderPass renderPass, VkExtent2D* pGranularity);
typedef VK_APICALL VkResult				(VK_APIENTRY* CreateCommandPoolFunc)							(VkDevice device, const VkCmdPoolCreateInfo* pCreateInfo, VkCmdPool* pCmdPool);
typedef VK_APICALL void					(VK_APIENTRY* DestroyCommandPoolFunc)							(VkDevice device, VkCmdPool cmdPool);
typedef VK_APICALL VkResult				(VK_APIENTRY* ResetCommandPoolFunc)								(VkDevice device, VkCmdPool cmdPool, VkCmdPoolResetFlags flags);
typedef VK_APICALL VkResult				(VK_APIENTRY* CreateCommandBufferFunc)							(VkDevice device, const VkCmdBufferCreateInfo* pCreateInfo, VkCmdBuffer* pCmdBuffer);
typedef VK_APICALL void					(VK_APIENTRY* DestroyCommandBufferFunc)							(VkDevice device, VkCmdBuffer commandBuffer);
typedef VK_APICALL VkResult				(VK_APIENTRY* BeginCommandBufferFunc)							(VkCmdBuffer cmdBuffer, const VkCmdBufferBeginInfo* pBeginInfo);
typedef VK_APICALL VkResult				(VK_APIENTRY* EndCommandBufferFunc)								(VkCmdBuffer cmdBuffer);
typedef VK_APICALL VkResult				(VK_APIENTRY* ResetCommandBufferFunc)							(VkCmdBuffer cmdBuffer, VkCmdBufferResetFlags flags);
typedef VK_APICALL void					(VK_APIENTRY* CmdBindPipelineFunc)								(VkCmdBuffer cmdBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline);
typedef VK_APICALL void					(VK_APIENTRY* CmdSetViewportFunc)								(VkCmdBuffer cmdBuffer, deUint32 viewportCount, const VkViewport* pViewports);
typedef VK_APICALL void					(VK_APIENTRY* CmdSetScissorFunc)								(VkCmdBuffer cmdBuffer, deUint32 scissorCount, const VkRect2D* pScissors);
typedef VK_APICALL void					(VK_APIENTRY* CmdSetLineWidthFunc)								(VkCmdBuffer cmdBuffer, float lineWidth);
typedef VK_APICALL void					(VK_APIENTRY* CmdSetDepthBiasFunc)								(VkCmdBuffer cmdBuffer, float depthBias, float depthBiasClamp, float slopeScaledDepthBias);
typedef VK_APICALL void					(VK_APIENTRY* CmdSetBlendConstantsFunc)							(VkCmdBuffer cmdBuffer, const float blendConst);
typedef VK_APICALL void					(VK_APIENTRY* CmdSetDepthBoundsFunc)							(VkCmdBuffer cmdBuffer, float minDepthBounds, float maxDepthBounds);
typedef VK_APICALL void					(VK_APIENTRY* CmdSetStencilCompareMaskFunc)						(VkCmdBuffer cmdBuffer, VkStencilFaceFlags faceMask, deUint32 stencilCompareMask);
typedef VK_APICALL void					(VK_APIENTRY* CmdSetStencilWriteMaskFunc)						(VkCmdBuffer cmdBuffer, VkStencilFaceFlags faceMask, deUint32 stencilWriteMask);
typedef VK_APICALL void					(VK_APIENTRY* CmdSetStencilReferenceFunc)						(VkCmdBuffer cmdBuffer, VkStencilFaceFlags faceMask, deUint32 stencilReference);
typedef VK_APICALL void					(VK_APIENTRY* CmdBindDescriptorSetsFunc)						(VkCmdBuffer cmdBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, deUint32 firstSet, deUint32 setCount, const VkDescriptorSet* pDescriptorSets, deUint32 dynamicOffsetCount, const deUint32* pDynamicOffsets);
typedef VK_APICALL void					(VK_APIENTRY* CmdBindIndexBufferFunc)							(VkCmdBuffer cmdBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType);
typedef VK_APICALL void					(VK_APIENTRY* CmdBindVertexBuffersFunc)							(VkCmdBuffer cmdBuffer, deUint32 startBinding, deUint32 bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets);
typedef VK_APICALL void					(VK_APIENTRY* CmdDrawFunc)										(VkCmdBuffer cmdBuffer, deUint32 vertexCount, deUint32 instanceCount, deUint32 firstVertex, deUint32 firstInstance);
typedef VK_APICALL void					(VK_APIENTRY* CmdDrawIndexedFunc)								(VkCmdBuffer cmdBuffer, deUint32 indexCount, deUint32 instanceCount, deUint32 firstIndex, deInt32 vertexOffset, deUint32 firstInstance);
typedef VK_APICALL void					(VK_APIENTRY* CmdDrawIndirectFunc)								(VkCmdBuffer cmdBuffer, VkBuffer buffer, VkDeviceSize offset, deUint32 count, deUint32 stride);
typedef VK_APICALL void					(VK_APIENTRY* CmdDrawIndexedIndirectFunc)						(VkCmdBuffer cmdBuffer, VkBuffer buffer, VkDeviceSize offset, deUint32 count, deUint32 stride);
typedef VK_APICALL void					(VK_APIENTRY* CmdDispatchFunc)									(VkCmdBuffer cmdBuffer, deUint32 x, deUint32 y, deUint32 z);
typedef VK_APICALL void					(VK_APIENTRY* CmdDispatchIndirectFunc)							(VkCmdBuffer cmdBuffer, VkBuffer buffer, VkDeviceSize offset);
typedef VK_APICALL void					(VK_APIENTRY* CmdCopyBufferFunc)								(VkCmdBuffer cmdBuffer, VkBuffer srcBuffer, VkBuffer destBuffer, deUint32 regionCount, const VkBufferCopy* pRegions);
typedef VK_APICALL void					(VK_APIENTRY* CmdCopyImageFunc)									(VkCmdBuffer cmdBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage destImage, VkImageLayout destImageLayout, deUint32 regionCount, const VkImageCopy* pRegions);
typedef VK_APICALL void					(VK_APIENTRY* CmdBlitImageFunc)									(VkCmdBuffer cmdBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage destImage, VkImageLayout destImageLayout, deUint32 regionCount, const VkImageBlit* pRegions, VkTexFilter filter);
typedef VK_APICALL void					(VK_APIENTRY* CmdCopyBufferToImageFunc)							(VkCmdBuffer cmdBuffer, VkBuffer srcBuffer, VkImage destImage, VkImageLayout destImageLayout, deUint32 regionCount, const VkBufferImageCopy* pRegions);
typedef VK_APICALL void					(VK_APIENTRY* CmdCopyImageToBufferFunc)							(VkCmdBuffer cmdBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer destBuffer, deUint32 regionCount, const VkBufferImageCopy* pRegions);
typedef VK_APICALL void					(VK_APIENTRY* CmdUpdateBufferFunc)								(VkCmdBuffer cmdBuffer, VkBuffer destBuffer, VkDeviceSize destOffset, VkDeviceSize dataSize, const deUint32* pData);
typedef VK_APICALL void					(VK_APIENTRY* CmdFillBufferFunc)								(VkCmdBuffer cmdBuffer, VkBuffer destBuffer, VkDeviceSize destOffset, VkDeviceSize fillSize, deUint32 data);
typedef VK_APICALL void					(VK_APIENTRY* CmdClearColorImageFunc)							(VkCmdBuffer cmdBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue* pColor, deUint32 rangeCount, const VkImageSubresourceRange* pRanges);
typedef VK_APICALL void					(VK_APIENTRY* CmdClearDepthStencilImageFunc)					(VkCmdBuffer cmdBuffer, VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue* pDepthStencil, deUint32 rangeCount, const VkImageSubresourceRange* pRanges);
typedef VK_APICALL void					(VK_APIENTRY* CmdClearColorAttachmentFunc)						(VkCmdBuffer cmdBuffer, deUint32 colorAttachment, VkImageLayout imageLayout, const VkClearColorValue* pColor, deUint32 rectCount, const VkRect3D* pRects);
typedef VK_APICALL void					(VK_APIENTRY* CmdClearDepthStencilAttachmentFunc)				(VkCmdBuffer cmdBuffer, VkImageAspectFlags aspectMask, VkImageLayout imageLayout, const VkClearDepthStencilValue* pDepthStencil, deUint32 rectCount, const VkRect3D* pRects);
typedef VK_APICALL void					(VK_APIENTRY* CmdResolveImageFunc)								(VkCmdBuffer cmdBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage destImage, VkImageLayout destImageLayout, deUint32 regionCount, const VkImageResolve* pRegions);
typedef VK_APICALL void					(VK_APIENTRY* CmdSetEventFunc)									(VkCmdBuffer cmdBuffer, VkEvent event, VkPipelineStageFlags stageMask);
typedef VK_APICALL void					(VK_APIENTRY* CmdResetEventFunc)								(VkCmdBuffer cmdBuffer, VkEvent event, VkPipelineStageFlags stageMask);
typedef VK_APICALL void					(VK_APIENTRY* CmdWaitEventsFunc)								(VkCmdBuffer cmdBuffer, deUint32 eventCount, const VkEvent* pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags destStageMask, deUint32 memBarrierCount, const void* const* ppMemBarriers);
typedef VK_APICALL void					(VK_APIENTRY* CmdPipelineBarrierFunc)							(VkCmdBuffer cmdBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags destStageMask, VkBool32 byRegion, deUint32 memBarrierCount, const void* const* ppMemBarriers);
typedef VK_APICALL void					(VK_APIENTRY* CmdBeginQueryFunc)								(VkCmdBuffer cmdBuffer, VkQueryPool queryPool, deUint32 slot, VkQueryControlFlags flags);
typedef VK_APICALL void					(VK_APIENTRY* CmdEndQueryFunc)									(VkCmdBuffer cmdBuffer, VkQueryPool queryPool, deUint32 slot);
typedef VK_APICALL void					(VK_APIENTRY* CmdResetQueryPoolFunc)							(VkCmdBuffer cmdBuffer, VkQueryPool queryPool, deUint32 startQuery, deUint32 queryCount);
typedef VK_APICALL void					(VK_APIENTRY* CmdWriteTimestampFunc)							(VkCmdBuffer cmdBuffer, VkTimestampType timestampType, VkBuffer destBuffer, VkDeviceSize destOffset);
typedef VK_APICALL void					(VK_APIENTRY* CmdCopyQueryPoolResultsFunc)						(VkCmdBuffer cmdBuffer, VkQueryPool queryPool, deUint32 startQuery, deUint32 queryCount, VkBuffer destBuffer, VkDeviceSize destOffset, VkDeviceSize destStride, VkQueryResultFlags flags);
typedef VK_APICALL void					(VK_APIENTRY* CmdPushConstantsFunc)								(VkCmdBuffer cmdBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, deUint32 start, deUint32 length, const void* values);
typedef VK_APICALL void					(VK_APIENTRY* CmdBeginRenderPassFunc)							(VkCmdBuffer cmdBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, VkRenderPassContents contents);
typedef VK_APICALL void					(VK_APIENTRY* CmdNextSubpassFunc)								(VkCmdBuffer cmdBuffer, VkRenderPassContents contents);
typedef VK_APICALL void					(VK_APIENTRY* CmdEndRenderPassFunc)								(VkCmdBuffer cmdBuffer);
typedef VK_APICALL void					(VK_APIENTRY* CmdExecuteCommandsFunc)							(VkCmdBuffer cmdBuffer, deUint32 cmdBuffersCount, const VkCmdBuffer* pCmdBuffers);