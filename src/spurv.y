%{
	#include <stdio.h>
#include <spurv_compiler.h>
#define YYSTYPE value_t*

int result_indices[] = {-1,1,-1,-1,-1,-1,-1,0,-1,-1,-1,-1,0,-1,-1,-1,0,1,-1,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-1,-1,-1,1,1,1,1,1,1,1,1,-1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-1,-1,0,-1,-1,-1,-1,-1,-1,-1,-1,1,-1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-1,-1,-1,-1,-1,1,-1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-1,-1,1,1,-1,-1,1,1,1,1,1,1,1,1,-1,-1,1,1,1,1,1,-1,-1,};

void register_identifier_definition(value_t* opcode);

%}

%token NEWLINE

%token MAYBE_NEWLINE
%token IDENTIFIER
%token NUMBER
%token STRING
%token EQUALS
%token HEADER_KEYWORD
%token HEADER_CLASS
%token HEADER_IO_KEYWORD
%token HEADER_UNIFORM_KEYWORD


%token OpNop
%token OpUndef
%token OpSourceContinued
%token OpSource
%token OpSourceExtension
%token OpName
%token OpMemberName
%token OpString
%token OpLine
%token OpNoLine
%token OpDecorate
%token OpMemberDecorate
%token OpDecorationGroup
%token OpGroupDecorate
%token OpGroupMemberDecorate
%token OpExtension
%token OpExtInstImport
%token OpExtInst
%token OpMemoryModel
%token OpEntryPoint
%token OpExecutionMode
%token OpCapability
%token OpTypeVoid
%token OpTypeBool
%token OpTypeInt
%token OpTypeFloat
%token OpTypeVector
%token OpTypeMatrix
%token OpTypeSampler
%token OpTypeSampledImage
%token OpTypeArray
%token OpTypeRuntimeArray
%token OpTypeStruct
%token OpTypeOpaque
%token OpTypePointer
%token OpTypeFunction
%token OpTypeEvent
%token OpTypeDeviceEvent
%token OpTypeReserveId
%token OpTypeQueue
%token OpTypePipe
%token OpTypeForwardPointer
%token OpConstantTrue
%token OpConstantFalse
%token OpConstant
%token OpConstantComposite
%token OpConstantSampler
%token OpConstantNull
%token OpSpecConstantTrue
%token OpSpecConstantFalse
%token OpSpecConstant
%token OpSpecConstantComposite
%token OpSpecConstantOp
%token OpVariable
%token OpImageTexelPointer
%token OpLoad
%token OpStore
%token OpCopyMemory
%token OpCopyMemorySized
%token OpAccessChain
%token OpInBoundsAccessChain
%token OpPtrAccessChain
%token OpArrayLength
%token OpGenericPtrMemSemantics
%token OpInBoundsPtrAccessChain
%token OpFunction
%token OpFunctionParameter
%token OpFunctionEnd
%token OpFunctionCall
%token OpSampledImage
%token OpImageSampleImplicitLod
%token OpImageSampleExplicitLod
%token OpImageSampleDrefImplicitLod
%token OpImageSampleDrefExplicitLod
%token OpImageSampleProjImplicitLod
%token OpImageSampleProjExplicitLod
%token OpImageSampleProjDrefImplicitLod
%token OpImageSampleProjDrefExplicitLod
%token OpImageFetch
%token OpImageGather
%token OpImageDrefGather
%token OpImageRead
%token OpImageWrite
%token OpImage
%token OpImageQueryFormat
%token OpImageQueryOrder
%token OpImageQuerySizeLod
%token OpImageQuerySize
%token OpImageQueryLod
%token OpImageQueryLevels
%token OpImageQuerySamples
%token OpImageSparseSampleImplicitLod
%token OpImageSparseSampleExplicitLod
%token OpImageSparseSampleDrefImplicitLod
%token OpImageSparseSampleDrefExplicitLod
%token OpImageSparseSampleProjImplicitLod
%token OpImageSparseSampleProjExplicitLod
%token OpImageSparseSampleProjDrefImplicitLod
%token OpImageSparseSampleProjDrefExplicitLod
%token OpImageSparseFetch
%token OpImageSparseGather
%token OpImageSparseDrefGather
%token OpImageSparseTexelsResident
%token OpImageSparseRead
%token OpConvertFToU
%token OpConvertFToS
%token OpConvertSToF
%token OpConvertUToF
%token OpUConvert
%token OpSConvert
%token OpFConvert
%token OpQuantizeToF16
%token OpConvertPtrToU
%token OpSatConvertSToU
%token OpSatConvertUToS
%token OpConvertUToPtr
%token OpPtrCastToGeneric
%token OpGenericCastToPtr
%token OpGenericCastToPtrExplicit
%token OpBitcast
%token OpVectorExtractDynamic
%token OpVectorInsertDynamic
%token OpVectorShuffle
%token OpCompositeConstruct
%token OpCompositeExtract
%token OpCompositeInsert
%token OpCopyObject
%token OpTranspose
%token OpSNegate
%token OpFNegate
%token OpIAdd
%token OpFAdd
%token OpISub
%token OpFSub
%token OpIMul
%token OpFMul
%token OpUDiv
%token OpSDiv
%token OpFDiv
%token OpUMod
%token OpSRem
%token OpSMod
%token OpFRem
%token OpFMod
%token OpVectorTimesScalar
%token OpMatrixTimesScalar
%token OpVectorTimesMatrix
%token OpMatrixTimesVector
%token OpMatrixTimesMatrix
%token OpOuterProduct
%token OpDot
%token OpIAddCarry
%token OpISubBorrow
%token OpUMulExtended
%token OpSMulExtended
%token OpShiftRightLogical
%token OpShiftRightArithmetic
%token OpShiftLeftLogical
%token OpBitwiseOr
%token OpBitwiseXor
%token OpBitwiseAnd
%token OpNot
%token OpBitFieldInsert
%token OpBitFieldSExtract
%token OpBitFieldUExtract
%token OpBitReverse
%token OpBitCount
%token OpAny
%token OpAll
%token OpIsNan
%token OpIsInf
%token OpIsFinite
%token OpIsNormal
%token OpSignBitSet
%token OpLessOrGreater
%token OpOrdered
%token OpUnordered
%token OpLogicalEqual
%token OpLogicalNotEqual
%token OpLogicalOr
%token OpLogicalAnd
%token OpLogicalNot
%token OpSelect
%token OpIEqual
%token OpINotEqual
%token OpUGreaterThan
%token OpSGreaterThan
%token OpUGreaterThanEqual
%token OpSGreaterThanEqual
%token OpULessThan
%token OpSLessThan
%token OpULessThanEqual
%token OpSLessThanEqual
%token OpFOrdEqual
%token OpFUnordEqual
%token OpFOrdNotEqual
%token OpFUnordNotEqual
%token OpFOrdLessThan
%token OpFUnordLessThan
%token OpFOrdGreaterThan
%token OpFUnordGreaterThan
%token OpFOrdLessThanEqual
%token OpFUnordLessThanEqual
%token OpFOrdGreaterThanEqual
%token OpFUnordGreaterThanEqual
%token OpDPdx
%token OpDPdy
%token OpFwidth
%token OpDPdxFine
%token OpDPdyFine
%token OpFwidthFine
%token OpDPdxCoarse
%token OpDPdyCoarse
%token OpFwidthCoarse
%token OpPhi
%token OpLoopMerge
%token OpSelectionMerge
%token OpLabel
%token OpBranch
%token OpBranchConditional
%token OpSwitch
%token OpReturn
%token OpReturnValue
%token OpUnreachable
%token OpLifetimeStart
%token OpLifetimeStop
%token OpAtomicLoad
%token OpAtomicStore
%token OpAtomicExchange
%token OpAtomicCompareExchangeWeak
%token OpAtomicIIncrement
%token OpAtomicIDecrement
%token OpAtomicIAdd
%token OpAtomicISub
%token OpAtomicSMin
%token OpAtomicUMin
%token OpAtomicSMax
%token OpAtomicUMax
%token OpAtomicAnd
%token OpAtomicOr
%token OpAtomicXor
%token OpAtomicFlagTestAndSet
%token OpAtomicFlagClear
%token OpEmitStreamVertex
%token OpEndStreamPrimitive
%token OpControlBarrier
%token OpMemoryBarrier
%token OpGroupAsyncCopy
%token OpGroupWaitEvents
%token OpGroupAll
%token OpGroupAny
%token OpGroupBroadcast
%token OpGroupIAdd
%token OpGroupFAdd
%token OpGroupFMin
%token OpGroupUMin
%token OpGroupSMin
%token OpGroupFMax
%token OpGroupUMax
%token OpGroupSMax
%token OpSubgroupBallotKHR
%token OpSubgroupFirstInvocationKHR
%token OpSubgroupReadInvocationKHR
%token OpGroupIAddNonUniformAMD
%token OpGroupFAddNonUniformAMD
%token OpGroupFMinNonUniformAMD
%token OpGroupUMinNonUniformAMD
%token OpGroupSMinNonUniformAMD
%token OpGroupFMaxNonUniformAMD
%token OpGroupUMaxNonUniformAMD
%token OpGroupSMaxNonUniformAMD
%token OpEnqueueMarker
%token OpGetKernelNDrangeSubGroupCount
%token OpGetKernelNDrangeMaxSubGroupSize
%token OpGetKernelWorkGroupSize
%token OpGetKernelPreferredWorkGroupSizeMultiple
%token OpRetainEvent
%token OpReleaseEvent
%token OpCreateUserEvent
%token OpIsValidEvent
%token OpSetUserEventStatus
%token OpCaptureEventProfilingInfo
%token OpGetDefaultQueue
%token OpBuildNDRange
%token OpReadPipe
%token OpWritePipe
%token OpReservedReadPipe
%token OpReservedWritePipe
%token OpReserveReadPipePackets
%token OpReserveWritePipePackets
%token OpCommitReadPipe
%token OpCommitWritePipe
%token OpIsValidReserveId
%token OpGetNumPipePackets
%token OpGetMaxPipePackets
%token OpGroupReserveReadPipePackets
%token OpGroupReserveWritePipePackets
%token OpGroupCommitReadPipe
%token OpGroupCommitWritePipe
%token E_Unknown
%token E_ESSL
%token E_GLSL
%token E_OpenCL_C
%token E_OpenCL_CPP
%token E_HLSL
%token E_Vertex
%token E_TessellationControl
%token E_TessellationEvaluation
%token E_Geometry
%token E_Fragment
%token E_GLCompute
%token E_Kernel
%token E_Logical
%token E_Physical32
%token E_Physical64
%token E_Simple
%token E_GLSL450
%token E_OpenCL
%token E_Invocations
%token E_SpacingEqual
%token E_SpacingFractionalEven
%token E_SpacingFractionalOdd
%token E_VertexOrderCw
%token E_VertexOrderCcw
%token E_PixelCenterInteger
%token E_OriginUpperLeft
%token E_OriginLowerLeft
%token E_EarlyFragmentTests
%token E_PointMode
%token E_Xfb
%token E_DepthReplacing
%token E_DepthGreater
%token E_DepthLess
%token E_DepthUnchanged
%token E_LocalSize
%token E_LocalSizeHint
%token E_InputPoints
%token E_InputLines
%token E_InputLinesAdjacency
%token E_Triangles
%token E_InputTrianglesAdjacency
%token E_Quads
%token E_Isolines
%token E_OutputVertices
%token E_OutputPoints
%token E_OutputLineStrip
%token E_OutputTriangleStrip
%token E_VecTypeHint
%token E_ContractionOff
%token E_Initializer
%token E_Finalizer
%token E_SubgroupSize
%token E_SubgroupsPerWorkgroup
%token E_SubgroupsPerWorkgroupId
%token E_LocalSizeId
%token E_LocalSizeHintId
%token E_PostDepthCoverage
%token E_StencilRefReplacingEXT
%token E_UniformConstant
%token E_Input
%token E_Uniform
%token E_Output
%token E_Workgroup
%token E_CrossWorkgroup
%token E_Private
%token E_Function
%token E_Generic
%token E_PushConstant
%token E_AtomicCounter
%token E_Image
%token E_StorageBuffer
%token E_1D
%token E_2D
%token E_3D
%token E_Cube
%token E_Rect
%token E_Buffer
%token E_SubpassData
%token E_None
%token E_ClampToEdge
%token E_Clamp
%token E_Repeat
%token E_RepeatMirrored
%token E_Nearest
%token E_Linear
%token E_Rgba32f
%token E_Rgba16f
%token E_R32f
%token E_Rgba8
%token E_Rgba8Snorm
%token E_Rg32f
%token E_Rg16f
%token E_R11fG11fB10f
%token E_R16f
%token E_Rgba16
%token E_Rgb10A2
%token E_Rg16
%token E_Rg8
%token E_R16
%token E_R8
%token E_Rgba16Snorm
%token E_Rg16Snorm
%token E_Rg8Snorm
%token E_R16Snorm
%token E_R8Snorm
%token E_Rgba32i
%token E_Rgba16i
%token E_Rgba8i
%token E_R32i
%token E_Rg32i
%token E_Rg16i
%token E_Rg8i
%token E_R16i
%token E_R8i
%token E_Rgba32ui
%token E_Rgba16ui
%token E_Rgba8ui
%token E_R32ui
%token E_Rgb10a2ui
%token E_Rg32ui
%token E_Rg16ui
%token E_Rg8ui
%token E_R16ui
%token E_R8ui
%token E_R
%token E_A
%token E_RG
%token E_RA
%token E_RGB
%token E_RGBA
%token E_BGRA
%token E_ARGB
%token E_Intensity
%token E_Luminance
%token E_Rx
%token E_RGx
%token E_RGBx
%token E_Depth
%token E_DepthStencil
%token E_sRGB
%token E_sRGBx
%token E_sRGBA
%token E_sBGRA
%token E_ABGR
%token E_SnormInt8
%token E_SnormInt16
%token E_UnormInt8
%token E_UnormInt16
%token E_UnormShort565
%token E_UnormShort555
%token E_UnormInt101010
%token E_SignedInt8
%token E_SignedInt16
%token E_SignedInt32
%token E_UnsignedInt8
%token E_UnsignedInt16
%token E_UnsignedInt32
%token E_HalfFloat
%token E_Float
%token E_UnormInt24
%token E_UnormInt101010_2
%token E_Bias
%token E_Lod
%token E_Grad
%token E_ConstOffset
%token E_Offset
%token E_ConstOffsets
%token E_Sample
%token E_MinLod
%token E_NotNaN
%token E_NotInf
%token E_NSZ
%token E_AllowRecip
%token E_Fast
%token E_RTE
%token E_RTZ
%token E_RTP
%token E_RTN
%token E_Export
%token E_Import
%token E_ReadOnly
%token E_WriteOnly
%token E_ReadWrite
%token E_Zext
%token E_Sext
%token E_ByVal
%token E_Sret
%token E_NoAlias
%token E_NoCapture
%token E_NoWrite
%token E_NoReadWrite
%token E_RelaxedPrecision
%token E_SpecId
%token E_Block
%token E_BufferBlock
%token E_RowMajor
%token E_ColMajor
%token E_ArrayStride
%token E_MatrixStride
%token E_GLSLShared
%token E_GLSLPacked
%token E_CPacked
%token E_BuiltIn
%token E_NoPerspective
%token E_Flat
%token E_Patch
%token E_Centroid
%token E_Invariant
%token E_Restrict
%token E_Aliased
%token E_Volatile
%token E_Constant
%token E_Coherent
%token E_NonWritable
%token E_NonReadable
%token E_SaturatedConversion
%token E_Stream
%token E_Location
%token E_Component
%token E_Index
%token E_Binding
%token E_DescriptorSet
%token E_XfbBuffer
%token E_XfbStride
%token E_FuncParamAttr
%token E_FPRoundingMode
%token E_FPFastMathMode
%token E_LinkageAttributes
%token E_NoContraction
%token E_InputAttachmentIndex
%token E_Alignment
%token E_MaxByteOffset
%token E_AlignmentId
%token E_MaxByteOffsetId
%token E_ExplicitInterpAMD
%token E_OverrideCoverageNV
%token E_PassthroughNV
%token E_ViewportRelativeNV
%token E_SecondaryViewportRelativeNV
%token E_NonUniformEXT
%token E_HlslCounterBufferGOOGLE
%token E_HlslSemanticGOOGLE
%token E_Position
%token E_PointSize
%token E_ClipDistance
%token E_CullDistance
%token E_VertexId
%token E_InstanceId
%token E_PrimitiveId
%token E_InvocationId
%token E_Layer
%token E_ViewportIndex
%token E_TessLevelOuter
%token E_TessLevelInner
%token E_TessCoord
%token E_PatchVertices
%token E_FragCoord
%token E_PointCoord
%token E_FrontFacing
%token E_SampleId
%token E_SamplePosition
%token E_SampleMask
%token E_FragDepth
%token E_HelperInvocation
%token E_NumWorkgroups
%token E_WorkgroupSize
%token E_WorkgroupId
%token E_LocalInvocationId
%token E_GlobalInvocationId
%token E_LocalInvocationIndex
%token E_WorkDim
%token E_GlobalSize
%token E_EnqueuedWorkgroupSize
%token E_GlobalOffset
%token E_GlobalLinearId
%token E_SubgroupMaxSize
%token E_NumSubgroups
%token E_NumEnqueuedSubgroups
%token E_SubgroupId
%token E_SubgroupLocalInvocationId
%token E_VertexIndex
%token E_InstanceIndex
%token E_SubgroupEqMask
%token E_SubgroupGeMask
%token E_SubgroupGtMask
%token E_SubgroupLeMask
%token E_SubgroupLtMask
%token E_SubgroupEqMaskKHR
%token E_SubgroupGeMaskKHR
%token E_SubgroupGtMaskKHR
%token E_SubgroupLeMaskKHR
%token E_SubgroupLtMaskKHR
%token E_BaseVertex
%token E_BaseInstance
%token E_DrawIndex
%token E_DeviceIndex
%token E_ViewIndex
%token E_BaryCoordNoPerspAMD
%token E_BaryCoordNoPerspCentroidAMD
%token E_BaryCoordNoPerspSampleAMD
%token E_BaryCoordSmoothAMD
%token E_BaryCoordSmoothCentroidAMD
%token E_BaryCoordSmoothSampleAMD
%token E_BaryCoordPullModelAMD
%token E_FragStencilRefEXT
%token E_ViewportMaskNV
%token E_SecondaryPositionNV
%token E_SecondaryViewportMaskNV
%token E_PositionPerViewNV
%token E_ViewportMaskPerViewNV
%token E_FullyCoveredEXT
%token E_Flatten
%token E_DontFlatten
%token E_Unroll
%token E_DontUnroll
%token E_DependencyInfinite
%token E_DependencyLength
%token E_Inline
%token E_DontInline
%token E_Pure
%token E_Const
%token E_Acquire
%token E_Release
%token E_AcquireRelease
%token E_SequentiallyConsistent
%token E_UniformMemory
%token E_SubgroupMemory
%token E_WorkgroupMemory
%token E_CrossWorkgroupMemory
%token E_AtomicCounterMemory
%token E_ImageMemory
%token E_Aligned
%token E_Nontemporal
%token E_CrossDevice
%token E_Device
%token E_Subgroup
%token E_Invocation
%token E_Reduce
%token E_InclusiveScan
%token E_ExclusiveScan
%token E_ClusteredReduce
%token E_PartitionedReduceNV
%token E_PartitionedInclusiveScanNV
%token E_PartitionedExclusiveScanNV
%token E_NoWait
%token E_WaitKernel
%token E_WaitWorkGroup
%token E_CmdExecTime
%token E_Matrix
%token E_Shader
%token E_Tessellation
%token E_Addresses
%token E_Linkage
%token E_Vector16
%token E_Float16Buffer
%token E_Float16
%token E_Float64
%token E_Int64
%token E_Int64Atomics
%token E_ImageBasic
%token E_ImageReadWrite
%token E_ImageMipmap
%token E_Pipes
%token E_Groups
%token E_DeviceEnqueue
%token E_LiteralSampler
%token E_AtomicStorage
%token E_Int16
%token E_TessellationPointSize
%token E_GeometryPointSize
%token E_ImageGatherExtended
%token E_StorageImageMultisample
%token E_UniformBufferArrayDynamicIndexing
%token E_SampledImageArrayDynamicIndexing
%token E_StorageBufferArrayDynamicIndexing
%token E_StorageImageArrayDynamicIndexing
%token E_ImageCubeArray
%token E_SampleRateShading
%token E_ImageRect
%token E_SampledRect
%token E_GenericPointer
%token E_Int8
%token E_InputAttachment
%token E_SparseResidency
%token E_Sampled1D
%token E_Image1D
%token E_SampledCubeArray
%token E_SampledBuffer
%token E_ImageBuffer
%token E_ImageMSArray
%token E_StorageImageExtendedFormats
%token E_ImageQuery
%token E_DerivativeControl
%token E_InterpolationFunction
%token E_TransformFeedback
%token E_GeometryStreams
%token E_StorageImageReadWithoutFormat
%token E_StorageImageWriteWithoutFormat
%token E_MultiViewport
%token E_SubgroupDispatch
%token E_NamedBarrier
%token E_PipeStorage
%token E_GroupNonUniform
%token E_GroupNonUniformVote
%token E_GroupNonUniformArithmetic
%token E_GroupNonUniformBallot
%token E_GroupNonUniformShuffle
%token E_GroupNonUniformShuffleRelative
%token E_GroupNonUniformClustered
%token E_GroupNonUniformQuad
%token E_SubgroupBallotKHR
%token E_DrawParameters
%token E_SubgroupVoteKHR
%token E_StorageBuffer16BitAccess
%token E_StorageUniformBufferBlock16
%token E_UniformAndStorageBuffer16BitAccess
%token E_StorageUniform16
%token E_StoragePushConstant16
%token E_StorageInputOutput16
%token E_DeviceGroup
%token E_MultiView
%token E_VariablePointersStorageBuffer
%token E_VariablePointers
%token E_AtomicStorageOps
%token E_SampleMaskPostDepthCoverage
%token E_Float16ImageAMD
%token E_ImageGatherBiasLodAMD
%token E_FragmentMaskAMD
%token E_StencilExportEXT
%token E_ImageReadWriteLodAMD
%token E_SampleMaskOverrideCoverageNV
%token E_GeometryShaderPassthroughNV
%token E_ShaderViewportIndexLayerEXT
%token E_ShaderViewportIndexLayerNV
%token E_ShaderViewportMaskNV
%token E_ShaderStereoViewNV
%token E_PerViewAttributesNV
%token E_FragmentFullyCoveredEXT
%token E_ShaderNonUniformEXT
%token E_RuntimeDescriptorArrayEXT
%token E_InputAttachmentArrayDynamicIndexingEXT
%token E_UniformTexelBufferArrayDynamicIndexingEXT
%token E_StorageTexelBufferArrayDynamicIndexingEXT
%token E_UniformBufferArrayNonUniformIndexingEXT
%token E_SampledImageArrayNonUniformIndexingEXT
%token E_StorageBufferArrayNonUniformIndexingEXT
%token E_StorageImageArrayNonUniformIndexingEXT
%token E_InputAttachmentArrayNonUniformIndexingEXT
%token E_UniformTexelBufferArrayNonUniformIndexingEXT
%token E_StorageTexelBufferArrayNonUniformIndexingEXT
%token E_SubgroupShuffleINTEL
%token E_SubgroupBufferBlockIOINTEL
%token E_SubgroupImageBlockIOINTEL
%token E_GroupNonUniformPartitionedNV
%token E_Round
%token E_RoundEven
%token E_Trunc
%token E_FAbs
%token E_SAbs
%token E_FSign
%token E_SSign
%token E_Floor
%token E_Ceil
%token E_Fract
%token E_Radians
%token E_Degrees
%token E_Sin
%token E_Cos
%token E_Tan
%token E_Asin
%token E_Acos
%token E_Atan
%token E_Sinh
%token E_Cosh
%token E_Tanh
%token E_Asinh
%token E_Acosh
%token E_Atanh
%token E_Atan2
%token E_Pow
%token E_Exp
%token E_Log
%token E_Exp2
%token E_Log2
%token E_Sqrt
%token E_InverseSqrt
%token E_Determinant
%token E_MatrixInverse
%token E_Modf
%token E_ModfStruct
%token E_FMin
%token E_UMin
%token E_SMin
%token E_FMax
%token E_UMax
%token E_SMax
%token E_FClamp
%token E_UClamp
%token E_SClamp
%token E_FMix
%token E_Step
%token E_SmoothStep
%token E_Fma
%token E_Frexp
%token E_FrexpStruct
%token E_Ldexp
%token E_PackSnorm4x8
%token E_PackUnorm4x8
%token E_PackSnorm2x16
%token E_PackUnorm2x16
%token E_PackHalf2x16
%token E_PackDouble2x32
%token E_UnpackSnorm2x16
%token E_UnpackUnorm2x16
%token E_UnpackHalf2x16
%token E_UnpackSnorm4x8
%token E_UnpackUnorm4x8
%token E_UnpackDouble2x32
%token E_Length
%token E_Distance
%token E_Cross
%token E_Normalize
%token E_FaceForward
%token E_Reflect
%token E_Refract
%token E_FindILsb
%token E_FindSMsb
%token E_FindUMsb
%token E_InterpolateAtCentroid
%token E_InterpolateAtSample
%token E_InterpolateAtOffset
%token E_NMin
%token E_NMax
%token E_NClamp

%%

program: header body {} | body {};
header: HEADER_KEYWORD header_name NEWLINE header_subentry_list 
      { 
          $$ = $2; 
          $$->next = $3; 
          register_header_definition($$); 
      }; 

header_subentry_list: header_subentry_list header_subentry 
      { 
          register_header_entry($2);} | 
          header_subentry {register_header_entry($1); 
      }; 

header_subentry: io_keyword_reference identifier_reference identifier_reference NEWLINE 
      { 
          $$ = $1; 
          $1->next = $2; 
          $2->next = $3; 
          add_future_identifier_definition($3->string); 
      } 
      | uniform_keyword_reference number_reference number_reference identifier_reference identifier_reference NEWLINE 
      { 
          $$ = $1; 
          $1->next = $2; 
          $2->next = $3; 
          $3->next = $4; 
          $4->next = $5; 
          add_future_identifier_definition($5->string); 
      }; 

body: instruction_list {} 
      | 
      instruction_list NEWLINE {}; 

instruction_list: instruction_list NEWLINE instruction {} 
      | 
      instruction {} ; 

instruction: opcode argument_list { 
          $1->next = $2; 
          register_identifier_definition($1); 
          // print_value_chain($2); 
          // printf("\n"); 
      } | 
      identifier_reference EQUALS opcode argument_list { 
          $3->next = $4; 
          int ind = result_indices[$3->operation_number]; 
          if(put_into_chain(ind, $1, $3) <= ind){ 
              printf("Not enough arguments in assignment at line %d\n", yylineno-1); 
              exit(-1); 
          } 
          register_identifier_definition($3); 
      }; 

argument_list: argument_list argument { 
          $$ = $2; 
          $$->next = $1; 
      } | 
      { $$ = NULL;} ; 


argument:
E_Unknown{ 
              //printf("Enum: Unknown\n"); 
              $$ = construct_value_number(0, NULL); 
          }
|
E_ESSL{ 
              //printf("Enum: ESSL\n"); 
              $$ = construct_value_number(1, NULL); 
          }
|
E_GLSL{ 
              //printf("Enum: GLSL\n"); 
              $$ = construct_value_number(2, NULL); 
          }
|
E_OpenCL_C{ 
              //printf("Enum: OpenCL_C\n"); 
              $$ = construct_value_number(3, NULL); 
          }
|
E_OpenCL_CPP{ 
              //printf("Enum: OpenCL_CPP\n"); 
              $$ = construct_value_number(4, NULL); 
          }
|
E_HLSL{ 
              //printf("Enum: HLSL\n"); 
              $$ = construct_value_number(5, NULL); 
          }
|
E_Vertex{ 
              //printf("Enum: Vertex\n"); 
              $$ = construct_value_number(0, NULL); 
          }
|
E_TessellationControl{ 
              //printf("Enum: TessellationControl\n"); 
              $$ = construct_value_number(1, NULL); 
          }
|
E_TessellationEvaluation{ 
              //printf("Enum: TessellationEvaluation\n"); 
              $$ = construct_value_number(2, NULL); 
          }
|
E_Geometry{ 
              //printf("Enum: Geometry\n"); 
              $$ = construct_value_number(2, NULL); 
          }
|
E_Fragment{ 
              //printf("Enum: Fragment\n"); 
              $$ = construct_value_number(4, NULL); 
          }
|
E_GLCompute{ 
              //printf("Enum: GLCompute\n"); 
              $$ = construct_value_number(5, NULL); 
          }
|
E_Kernel{ 
              //printf("Enum: Kernel\n"); 
              $$ = construct_value_number(6, NULL); 
          }
|
E_Logical{ 
              //printf("Enum: Logical\n"); 
              $$ = construct_value_number(0, NULL); 
          }
|
E_Physical32{ 
              //printf("Enum: Physical32\n"); 
              $$ = construct_value_number(1, NULL); 
          }
|
E_Physical64{ 
              //printf("Enum: Physical64\n"); 
              $$ = construct_value_number(2, NULL); 
          }
|
E_Simple{ 
              //printf("Enum: Simple\n"); 
              $$ = construct_value_number(0, NULL); 
          }
|
E_GLSL450{ 
              //printf("Enum: GLSL450\n"); 
              $$ = construct_value_number(1, NULL); 
          }
|
E_OpenCL{ 
              //printf("Enum: OpenCL\n"); 
              $$ = construct_value_number(2, NULL); 
          }
|
E_Invocations{ 
              //printf("Enum: Invocations\n"); 
              $$ = construct_value_number(0, NULL); 
          }
|
E_SpacingEqual{ 
              //printf("Enum: SpacingEqual\n"); 
              $$ = construct_value_number(1, NULL); 
          }
|
E_SpacingFractionalEven{ 
              //printf("Enum: SpacingFractionalEven\n"); 
              $$ = construct_value_number(2, NULL); 
          }
|
E_SpacingFractionalOdd{ 
              //printf("Enum: SpacingFractionalOdd\n"); 
              $$ = construct_value_number(3, NULL); 
          }
|
E_VertexOrderCw{ 
              //printf("Enum: VertexOrderCw\n"); 
              $$ = construct_value_number(4, NULL); 
          }
|
E_VertexOrderCcw{ 
              //printf("Enum: VertexOrderCcw\n"); 
              $$ = construct_value_number(5, NULL); 
          }
|
E_PixelCenterInteger{ 
              //printf("Enum: PixelCenterInteger\n"); 
              $$ = construct_value_number(6, NULL); 
          }
|
E_OriginUpperLeft{ 
              //printf("Enum: OriginUpperLeft\n"); 
              $$ = construct_value_number(7, NULL); 
          }
|
E_OriginLowerLeft{ 
              //printf("Enum: OriginLowerLeft\n"); 
              $$ = construct_value_number(8, NULL); 
          }
|
E_EarlyFragmentTests{ 
              //printf("Enum: EarlyFragmentTests\n"); 
              $$ = construct_value_number(9, NULL); 
          }
|
E_PointMode{ 
              //printf("Enum: PointMode\n"); 
              $$ = construct_value_number(10, NULL); 
          }
|
E_Xfb{ 
              //printf("Enum: Xfb\n"); 
              $$ = construct_value_number(11, NULL); 
          }
|
E_DepthReplacing{ 
              //printf("Enum: DepthReplacing\n"); 
              $$ = construct_value_number(12, NULL); 
          }
|
E_DepthGreater{ 
              //printf("Enum: DepthGreater\n"); 
              $$ = construct_value_number(14, NULL); 
          }
|
E_DepthLess{ 
              //printf("Enum: DepthLess\n"); 
              $$ = construct_value_number(15, NULL); 
          }
|
E_DepthUnchanged{ 
              //printf("Enum: DepthUnchanged\n"); 
              $$ = construct_value_number(16, NULL); 
          }
|
E_LocalSize{ 
              //printf("Enum: LocalSize\n"); 
              $$ = construct_value_number(17, NULL); 
          }
|
E_LocalSizeHint{ 
              //printf("Enum: LocalSizeHint\n"); 
              $$ = construct_value_number(18, NULL); 
          }
|
E_InputPoints{ 
              //printf("Enum: InputPoints\n"); 
              $$ = construct_value_number(19, NULL); 
          }
|
E_InputLines{ 
              //printf("Enum: InputLines\n"); 
              $$ = construct_value_number(20, NULL); 
          }
|
E_InputLinesAdjacency{ 
              //printf("Enum: InputLinesAdjacency\n"); 
              $$ = construct_value_number(21, NULL); 
          }
|
E_Triangles{ 
              //printf("Enum: Triangles\n"); 
              $$ = construct_value_number(22, NULL); 
          }
|
E_InputTrianglesAdjacency{ 
              //printf("Enum: InputTrianglesAdjacency\n"); 
              $$ = construct_value_number(23, NULL); 
          }
|
E_Quads{ 
              //printf("Enum: Quads\n"); 
              $$ = construct_value_number(24, NULL); 
          }
|
E_Isolines{ 
              //printf("Enum: Isolines\n"); 
              $$ = construct_value_number(25, NULL); 
          }
|
E_OutputVertices{ 
              //printf("Enum: OutputVertices\n"); 
              $$ = construct_value_number(26, NULL); 
          }
|
E_OutputPoints{ 
              //printf("Enum: OutputPoints\n"); 
              $$ = construct_value_number(27, NULL); 
          }
|
E_OutputLineStrip{ 
              //printf("Enum: OutputLineStrip\n"); 
              $$ = construct_value_number(28, NULL); 
          }
|
E_OutputTriangleStrip{ 
              //printf("Enum: OutputTriangleStrip\n"); 
              $$ = construct_value_number(29, NULL); 
          }
|
E_VecTypeHint{ 
              //printf("Enum: VecTypeHint\n"); 
              $$ = construct_value_number(30, NULL); 
          }
|
E_ContractionOff{ 
              //printf("Enum: ContractionOff\n"); 
              $$ = construct_value_number(31, NULL); 
          }
|
E_Initializer{ 
              //printf("Enum: Initializer\n"); 
              $$ = construct_value_number(33, NULL); 
          }
|
E_Finalizer{ 
              //printf("Enum: Finalizer\n"); 
              $$ = construct_value_number(34, NULL); 
          }
|
E_SubgroupSize{ 
              //printf("Enum: SubgroupSize\n"); 
              $$ = construct_value_number(36, NULL); 
          }
|
E_SubgroupsPerWorkgroup{ 
              //printf("Enum: SubgroupsPerWorkgroup\n"); 
              $$ = construct_value_number(36, NULL); 
          }
|
E_SubgroupsPerWorkgroupId{ 
              //printf("Enum: SubgroupsPerWorkgroupId\n"); 
              $$ = construct_value_number(37, NULL); 
          }
|
E_LocalSizeId{ 
              //printf("Enum: LocalSizeId\n"); 
              $$ = construct_value_number(38, NULL); 
          }
|
E_LocalSizeHintId{ 
              //printf("Enum: LocalSizeHintId\n"); 
              $$ = construct_value_number(39, NULL); 
          }
|
E_PostDepthCoverage{ 
              //printf("Enum: PostDepthCoverage\n"); 
              $$ = construct_value_number(4446, NULL); 
          }
|
E_StencilRefReplacingEXT{ 
              //printf("Enum: StencilRefReplacingEXT\n"); 
              $$ = construct_value_number(5027, NULL); 
          }
|
E_UniformConstant{ 
              //printf("Enum: UniformConstant\n"); 
              $$ = construct_value_number(0, NULL); 
          }
|
E_Input{ 
              //printf("Enum: Input\n"); 
              $$ = construct_value_number(1, NULL); 
          }
|
E_Uniform{ 
              //printf("Enum: Uniform\n"); 
              $$ = construct_value_number(26, NULL); 
          }
|
E_Output{ 
              //printf("Enum: Output\n"); 
              $$ = construct_value_number(3, NULL); 
          }
|
E_Workgroup{ 
              //printf("Enum: Workgroup\n"); 
              $$ = construct_value_number(2, NULL); 
          }
|
E_CrossWorkgroup{ 
              //printf("Enum: CrossWorkgroup\n"); 
              $$ = construct_value_number(5, NULL); 
          }
|
E_Private{ 
              //printf("Enum: Private\n"); 
              $$ = construct_value_number(6, NULL); 
          }
|
E_Function{ 
              //printf("Enum: Function\n"); 
              $$ = construct_value_number(7, NULL); 
          }
|
E_Generic{ 
              //printf("Enum: Generic\n"); 
              $$ = construct_value_number(8, NULL); 
          }
|
E_PushConstant{ 
              //printf("Enum: PushConstant\n"); 
              $$ = construct_value_number(9, NULL); 
          }
|
E_AtomicCounter{ 
              //printf("Enum: AtomicCounter\n"); 
              $$ = construct_value_number(10, NULL); 
          }
|
E_Image{ 
              //printf("Enum: Image\n"); 
              $$ = construct_value_number(11, NULL); 
          }
|
E_StorageBuffer{ 
              //printf("Enum: StorageBuffer\n"); 
              $$ = construct_value_number(12, NULL); 
          }
|
E_1D{ 
              //printf("Enum: 1D\n"); 
              $$ = construct_value_number(0, NULL); 
          }
|
E_2D{ 
              //printf("Enum: 2D\n"); 
              $$ = construct_value_number(1, NULL); 
          }
|
E_3D{ 
              //printf("Enum: 3D\n"); 
              $$ = construct_value_number(2, NULL); 
          }
|
E_Cube{ 
              //printf("Enum: Cube\n"); 
              $$ = construct_value_number(3, NULL); 
          }
|
E_Rect{ 
              //printf("Enum: Rect\n"); 
              $$ = construct_value_number(4, NULL); 
          }
|
E_Buffer{ 
              //printf("Enum: Buffer\n"); 
              $$ = construct_value_number(5, NULL); 
          }
|
E_SubpassData{ 
              //printf("Enum: SubpassData\n"); 
              $$ = construct_value_number(6, NULL); 
          }
|
E_None{ 
              //printf("Enum: None\n"); 
              $$ = construct_value_number(0x0, NULL); 
          }
|
E_ClampToEdge{ 
              //printf("Enum: ClampToEdge\n"); 
              $$ = construct_value_number(1, NULL); 
          }
|
E_Clamp{ 
              //printf("Enum: Clamp\n"); 
              $$ = construct_value_number(2, NULL); 
          }
|
E_Repeat{ 
              //printf("Enum: Repeat\n"); 
              $$ = construct_value_number(3, NULL); 
          }
|
E_RepeatMirrored{ 
              //printf("Enum: RepeatMirrored\n"); 
              $$ = construct_value_number(4, NULL); 
          }
|
E_Nearest{ 
              //printf("Enum: Nearest\n"); 
              $$ = construct_value_number(0, NULL); 
          }
|
E_Linear{ 
              //printf("Enum: Linear\n"); 
              $$ = construct_value_number(1, NULL); 
          }
|
E_Rgba32f{ 
              //printf("Enum: Rgba32f\n"); 
              $$ = construct_value_number(1, NULL); 
          }
|
E_Rgba16f{ 
              //printf("Enum: Rgba16f\n"); 
              $$ = construct_value_number(2, NULL); 
          }
|
E_R32f{ 
              //printf("Enum: R32f\n"); 
              $$ = construct_value_number(3, NULL); 
          }
|
E_Rgba8{ 
              //printf("Enum: Rgba8\n"); 
              $$ = construct_value_number(4, NULL); 
          }
|
E_Rgba8Snorm{ 
              //printf("Enum: Rgba8Snorm\n"); 
              $$ = construct_value_number(5, NULL); 
          }
|
E_Rg32f{ 
              //printf("Enum: Rg32f\n"); 
              $$ = construct_value_number(6, NULL); 
          }
|
E_Rg16f{ 
              //printf("Enum: Rg16f\n"); 
              $$ = construct_value_number(7, NULL); 
          }
|
E_R11fG11fB10f{ 
              //printf("Enum: R11fG11fB10f\n"); 
              $$ = construct_value_number(8, NULL); 
          }
|
E_R16f{ 
              //printf("Enum: R16f\n"); 
              $$ = construct_value_number(9, NULL); 
          }
|
E_Rgba16{ 
              //printf("Enum: Rgba16\n"); 
              $$ = construct_value_number(10, NULL); 
          }
|
E_Rgb10A2{ 
              //printf("Enum: Rgb10A2\n"); 
              $$ = construct_value_number(11, NULL); 
          }
|
E_Rg16{ 
              //printf("Enum: Rg16\n"); 
              $$ = construct_value_number(12, NULL); 
          }
|
E_Rg8{ 
              //printf("Enum: Rg8\n"); 
              $$ = construct_value_number(13, NULL); 
          }
|
E_R16{ 
              //printf("Enum: R16\n"); 
              $$ = construct_value_number(14, NULL); 
          }
|
E_R8{ 
              //printf("Enum: R8\n"); 
              $$ = construct_value_number(15, NULL); 
          }
|
E_Rgba16Snorm{ 
              //printf("Enum: Rgba16Snorm\n"); 
              $$ = construct_value_number(16, NULL); 
          }
|
E_Rg16Snorm{ 
              //printf("Enum: Rg16Snorm\n"); 
              $$ = construct_value_number(17, NULL); 
          }
|
E_Rg8Snorm{ 
              //printf("Enum: Rg8Snorm\n"); 
              $$ = construct_value_number(18, NULL); 
          }
|
E_R16Snorm{ 
              //printf("Enum: R16Snorm\n"); 
              $$ = construct_value_number(19, NULL); 
          }
|
E_R8Snorm{ 
              //printf("Enum: R8Snorm\n"); 
              $$ = construct_value_number(20, NULL); 
          }
|
E_Rgba32i{ 
              //printf("Enum: Rgba32i\n"); 
              $$ = construct_value_number(21, NULL); 
          }
|
E_Rgba16i{ 
              //printf("Enum: Rgba16i\n"); 
              $$ = construct_value_number(22, NULL); 
          }
|
E_Rgba8i{ 
              //printf("Enum: Rgba8i\n"); 
              $$ = construct_value_number(23, NULL); 
          }
|
E_R32i{ 
              //printf("Enum: R32i\n"); 
              $$ = construct_value_number(24, NULL); 
          }
|
E_Rg32i{ 
              //printf("Enum: Rg32i\n"); 
              $$ = construct_value_number(25, NULL); 
          }
|
E_Rg16i{ 
              //printf("Enum: Rg16i\n"); 
              $$ = construct_value_number(26, NULL); 
          }
|
E_Rg8i{ 
              //printf("Enum: Rg8i\n"); 
              $$ = construct_value_number(27, NULL); 
          }
|
E_R16i{ 
              //printf("Enum: R16i\n"); 
              $$ = construct_value_number(28, NULL); 
          }
|
E_R8i{ 
              //printf("Enum: R8i\n"); 
              $$ = construct_value_number(29, NULL); 
          }
|
E_Rgba32ui{ 
              //printf("Enum: Rgba32ui\n"); 
              $$ = construct_value_number(30, NULL); 
          }
|
E_Rgba16ui{ 
              //printf("Enum: Rgba16ui\n"); 
              $$ = construct_value_number(31, NULL); 
          }
|
E_Rgba8ui{ 
              //printf("Enum: Rgba8ui\n"); 
              $$ = construct_value_number(32, NULL); 
          }
|
E_R32ui{ 
              //printf("Enum: R32ui\n"); 
              $$ = construct_value_number(33, NULL); 
          }
|
E_Rgb10a2ui{ 
              //printf("Enum: Rgb10a2ui\n"); 
              $$ = construct_value_number(34, NULL); 
          }
|
E_Rg32ui{ 
              //printf("Enum: Rg32ui\n"); 
              $$ = construct_value_number(35, NULL); 
          }
|
E_Rg16ui{ 
              //printf("Enum: Rg16ui\n"); 
              $$ = construct_value_number(36, NULL); 
          }
|
E_Rg8ui{ 
              //printf("Enum: Rg8ui\n"); 
              $$ = construct_value_number(37, NULL); 
          }
|
E_R16ui{ 
              //printf("Enum: R16ui\n"); 
              $$ = construct_value_number(38, NULL); 
          }
|
E_R8ui{ 
              //printf("Enum: R8ui\n"); 
              $$ = construct_value_number(39, NULL); 
          }
|
E_R{ 
              //printf("Enum: R\n"); 
              $$ = construct_value_number(0, NULL); 
          }
|
E_A{ 
              //printf("Enum: A\n"); 
              $$ = construct_value_number(1, NULL); 
          }
|
E_RG{ 
              //printf("Enum: RG\n"); 
              $$ = construct_value_number(2, NULL); 
          }
|
E_RA{ 
              //printf("Enum: RA\n"); 
              $$ = construct_value_number(3, NULL); 
          }
|
E_RGB{ 
              //printf("Enum: RGB\n"); 
              $$ = construct_value_number(4, NULL); 
          }
|
E_RGBA{ 
              //printf("Enum: RGBA\n"); 
              $$ = construct_value_number(5, NULL); 
          }
|
E_BGRA{ 
              //printf("Enum: BGRA\n"); 
              $$ = construct_value_number(6, NULL); 
          }
|
E_ARGB{ 
              //printf("Enum: ARGB\n"); 
              $$ = construct_value_number(7, NULL); 
          }
|
E_Intensity{ 
              //printf("Enum: Intensity\n"); 
              $$ = construct_value_number(8, NULL); 
          }
|
E_Luminance{ 
              //printf("Enum: Luminance\n"); 
              $$ = construct_value_number(9, NULL); 
          }
|
E_Rx{ 
              //printf("Enum: Rx\n"); 
              $$ = construct_value_number(10, NULL); 
          }
|
E_RGx{ 
              //printf("Enum: RGx\n"); 
              $$ = construct_value_number(11, NULL); 
          }
|
E_RGBx{ 
              //printf("Enum: RGBx\n"); 
              $$ = construct_value_number(12, NULL); 
          }
|
E_Depth{ 
              //printf("Enum: Depth\n"); 
              $$ = construct_value_number(13, NULL); 
          }
|
E_DepthStencil{ 
              //printf("Enum: DepthStencil\n"); 
              $$ = construct_value_number(14, NULL); 
          }
|
E_sRGB{ 
              //printf("Enum: sRGB\n"); 
              $$ = construct_value_number(15, NULL); 
          }
|
E_sRGBx{ 
              //printf("Enum: sRGBx\n"); 
              $$ = construct_value_number(16, NULL); 
          }
|
E_sRGBA{ 
              //printf("Enum: sRGBA\n"); 
              $$ = construct_value_number(17, NULL); 
          }
|
E_sBGRA{ 
              //printf("Enum: sBGRA\n"); 
              $$ = construct_value_number(18, NULL); 
          }
|
E_ABGR{ 
              //printf("Enum: ABGR\n"); 
              $$ = construct_value_number(19, NULL); 
          }
|
E_SnormInt8{ 
              //printf("Enum: SnormInt8\n"); 
              $$ = construct_value_number(0, NULL); 
          }
|
E_SnormInt16{ 
              //printf("Enum: SnormInt16\n"); 
              $$ = construct_value_number(1, NULL); 
          }
|
E_UnormInt8{ 
              //printf("Enum: UnormInt8\n"); 
              $$ = construct_value_number(2, NULL); 
          }
|
E_UnormInt16{ 
              //printf("Enum: UnormInt16\n"); 
              $$ = construct_value_number(3, NULL); 
          }
|
E_UnormShort565{ 
              //printf("Enum: UnormShort565\n"); 
              $$ = construct_value_number(4, NULL); 
          }
|
E_UnormShort555{ 
              //printf("Enum: UnormShort555\n"); 
              $$ = construct_value_number(5, NULL); 
          }
|
E_UnormInt101010{ 
              //printf("Enum: UnormInt101010\n"); 
              $$ = construct_value_number(6, NULL); 
          }
|
E_SignedInt8{ 
              //printf("Enum: SignedInt8\n"); 
              $$ = construct_value_number(7, NULL); 
          }
|
E_SignedInt16{ 
              //printf("Enum: SignedInt16\n"); 
              $$ = construct_value_number(8, NULL); 
          }
|
E_SignedInt32{ 
              //printf("Enum: SignedInt32\n"); 
              $$ = construct_value_number(9, NULL); 
          }
|
E_UnsignedInt8{ 
              //printf("Enum: UnsignedInt8\n"); 
              $$ = construct_value_number(10, NULL); 
          }
|
E_UnsignedInt16{ 
              //printf("Enum: UnsignedInt16\n"); 
              $$ = construct_value_number(11, NULL); 
          }
|
E_UnsignedInt32{ 
              //printf("Enum: UnsignedInt32\n"); 
              $$ = construct_value_number(12, NULL); 
          }
|
E_HalfFloat{ 
              //printf("Enum: HalfFloat\n"); 
              $$ = construct_value_number(13, NULL); 
          }
|
E_Float{ 
              //printf("Enum: Float\n"); 
              $$ = construct_value_number(14, NULL); 
          }
|
E_UnormInt24{ 
              //printf("Enum: UnormInt24\n"); 
              $$ = construct_value_number(15, NULL); 
          }
|
E_UnormInt101010_2{ 
              //printf("Enum: UnormInt101010_2\n"); 
              $$ = construct_value_number(16, NULL); 
          }
|
E_Bias{ 
              //printf("Enum: Bias\n"); 
              $$ = construct_value_number(0x1, NULL); 
          }
|
E_Lod{ 
              //printf("Enum: Lod\n"); 
              $$ = construct_value_number(0x2, NULL); 
          }
|
E_Grad{ 
              //printf("Enum: Grad\n"); 
              $$ = construct_value_number(0x4, NULL); 
          }
|
E_ConstOffset{ 
              //printf("Enum: ConstOffset\n"); 
              $$ = construct_value_number(0x8, NULL); 
          }
|
E_Offset{ 
              //printf("Enum: Offset\n"); 
              $$ = construct_value_number(35, NULL); 
          }
|
E_ConstOffsets{ 
              //printf("Enum: ConstOffsets\n"); 
              $$ = construct_value_number(0x20, NULL); 
          }
|
E_Sample{ 
              //printf("Enum: Sample\n"); 
              $$ = construct_value_number(17, NULL); 
          }
|
E_MinLod{ 
              //printf("Enum: MinLod\n"); 
              $$ = construct_value_number(42, NULL); 
          }
|
E_NotNaN{ 
              //printf("Enum: NotNaN\n"); 
              $$ = construct_value_number(0x1, NULL); 
          }
|
E_NotInf{ 
              //printf("Enum: NotInf\n"); 
              $$ = construct_value_number(0x2, NULL); 
          }
|
E_NSZ{ 
              //printf("Enum: NSZ\n"); 
              $$ = construct_value_number(0x4, NULL); 
          }
|
E_AllowRecip{ 
              //printf("Enum: AllowRecip\n"); 
              $$ = construct_value_number(0x8, NULL); 
          }
|
E_Fast{ 
              //printf("Enum: Fast\n"); 
              $$ = construct_value_number(0x10, NULL); 
          }
|
E_RTE{ 
              //printf("Enum: RTE\n"); 
              $$ = construct_value_number(0, NULL); 
          }
|
E_RTZ{ 
              //printf("Enum: RTZ\n"); 
              $$ = construct_value_number(1, NULL); 
          }
|
E_RTP{ 
              //printf("Enum: RTP\n"); 
              $$ = construct_value_number(2, NULL); 
          }
|
E_RTN{ 
              //printf("Enum: RTN\n"); 
              $$ = construct_value_number(3, NULL); 
          }
|
E_Export{ 
              //printf("Enum: Export\n"); 
              $$ = construct_value_number(0, NULL); 
          }
|
E_Import{ 
              //printf("Enum: Import\n"); 
              $$ = construct_value_number(1, NULL); 
          }
|
E_ReadOnly{ 
              //printf("Enum: ReadOnly\n"); 
              $$ = construct_value_number(0, NULL); 
          }
|
E_WriteOnly{ 
              //printf("Enum: WriteOnly\n"); 
              $$ = construct_value_number(1, NULL); 
          }
|
E_ReadWrite{ 
              //printf("Enum: ReadWrite\n"); 
              $$ = construct_value_number(2, NULL); 
          }
|
E_Zext{ 
              //printf("Enum: Zext\n"); 
              $$ = construct_value_number(0, NULL); 
          }
|
E_Sext{ 
              //printf("Enum: Sext\n"); 
              $$ = construct_value_number(1, NULL); 
          }
|
E_ByVal{ 
              //printf("Enum: ByVal\n"); 
              $$ = construct_value_number(2, NULL); 
          }
|
E_Sret{ 
              //printf("Enum: Sret\n"); 
              $$ = construct_value_number(3, NULL); 
          }
|
E_NoAlias{ 
              //printf("Enum: NoAlias\n"); 
              $$ = construct_value_number(4, NULL); 
          }
|
E_NoCapture{ 
              //printf("Enum: NoCapture\n"); 
              $$ = construct_value_number(5, NULL); 
          }
|
E_NoWrite{ 
              //printf("Enum: NoWrite\n"); 
              $$ = construct_value_number(6, NULL); 
          }
|
E_NoReadWrite{ 
              //printf("Enum: NoReadWrite\n"); 
              $$ = construct_value_number(7, NULL); 
          }
|
E_RelaxedPrecision{ 
              //printf("Enum: RelaxedPrecision\n"); 
              $$ = construct_value_number(0, NULL); 
          }
|
E_SpecId{ 
              //printf("Enum: SpecId\n"); 
              $$ = construct_value_number(1, NULL); 
          }
|
E_Block{ 
              //printf("Enum: Block\n"); 
              $$ = construct_value_number(2, NULL); 
          }
|
E_BufferBlock{ 
              //printf("Enum: BufferBlock\n"); 
              $$ = construct_value_number(3, NULL); 
          }
|
E_RowMajor{ 
              //printf("Enum: RowMajor\n"); 
              $$ = construct_value_number(4, NULL); 
          }
|
E_ColMajor{ 
              //printf("Enum: ColMajor\n"); 
              $$ = construct_value_number(5, NULL); 
          }
|
E_ArrayStride{ 
              //printf("Enum: ArrayStride\n"); 
              $$ = construct_value_number(6, NULL); 
          }
|
E_MatrixStride{ 
              //printf("Enum: MatrixStride\n"); 
              $$ = construct_value_number(7, NULL); 
          }
|
E_GLSLShared{ 
              //printf("Enum: GLSLShared\n"); 
              $$ = construct_value_number(8, NULL); 
          }
|
E_GLSLPacked{ 
              //printf("Enum: GLSLPacked\n"); 
              $$ = construct_value_number(9, NULL); 
          }
|
E_CPacked{ 
              //printf("Enum: CPacked\n"); 
              $$ = construct_value_number(10, NULL); 
          }
|
E_BuiltIn{ 
              //printf("Enum: BuiltIn\n"); 
              $$ = construct_value_number(11, NULL); 
          }
|
E_NoPerspective{ 
              //printf("Enum: NoPerspective\n"); 
              $$ = construct_value_number(13, NULL); 
          }
|
E_Flat{ 
              //printf("Enum: Flat\n"); 
              $$ = construct_value_number(14, NULL); 
          }
|
E_Patch{ 
              //printf("Enum: Patch\n"); 
              $$ = construct_value_number(15, NULL); 
          }
|
E_Centroid{ 
              //printf("Enum: Centroid\n"); 
              $$ = construct_value_number(16, NULL); 
          }
|
E_Invariant{ 
              //printf("Enum: Invariant\n"); 
              $$ = construct_value_number(18, NULL); 
          }
|
E_Restrict{ 
              //printf("Enum: Restrict\n"); 
              $$ = construct_value_number(19, NULL); 
          }
|
E_Aliased{ 
              //printf("Enum: Aliased\n"); 
              $$ = construct_value_number(20, NULL); 
          }
|
E_Volatile{ 
              //printf("Enum: Volatile\n"); 
              $$ = construct_value_number(0x1, NULL); 
          }
|
E_Constant{ 
              //printf("Enum: Constant\n"); 
              $$ = construct_value_number(22, NULL); 
          }
|
E_Coherent{ 
              //printf("Enum: Coherent\n"); 
              $$ = construct_value_number(23, NULL); 
          }
|
E_NonWritable{ 
              //printf("Enum: NonWritable\n"); 
              $$ = construct_value_number(24, NULL); 
          }
|
E_NonReadable{ 
              //printf("Enum: NonReadable\n"); 
              $$ = construct_value_number(25, NULL); 
          }
|
E_SaturatedConversion{ 
              //printf("Enum: SaturatedConversion\n"); 
              $$ = construct_value_number(28, NULL); 
          }
|
E_Stream{ 
              //printf("Enum: Stream\n"); 
              $$ = construct_value_number(29, NULL); 
          }
|
E_Location{ 
              //printf("Enum: Location\n"); 
              $$ = construct_value_number(30, NULL); 
          }
|
E_Component{ 
              //printf("Enum: Component\n"); 
              $$ = construct_value_number(31, NULL); 
          }
|
E_Index{ 
              //printf("Enum: Index\n"); 
              $$ = construct_value_number(32, NULL); 
          }
|
E_Binding{ 
              //printf("Enum: Binding\n"); 
              $$ = construct_value_number(33, NULL); 
          }
|
E_DescriptorSet{ 
              //printf("Enum: DescriptorSet\n"); 
              $$ = construct_value_number(34, NULL); 
          }
|
E_XfbBuffer{ 
              //printf("Enum: XfbBuffer\n"); 
              $$ = construct_value_number(36, NULL); 
          }
|
E_XfbStride{ 
              //printf("Enum: XfbStride\n"); 
              $$ = construct_value_number(37, NULL); 
          }
|
E_FuncParamAttr{ 
              //printf("Enum: FuncParamAttr\n"); 
              $$ = construct_value_number(38, NULL); 
          }
|
E_FPRoundingMode{ 
              //printf("Enum: FPRoundingMode\n"); 
              $$ = construct_value_number(39, NULL); 
          }
|
E_FPFastMathMode{ 
              //printf("Enum: FPFastMathMode\n"); 
              $$ = construct_value_number(40, NULL); 
          }
|
E_LinkageAttributes{ 
              //printf("Enum: LinkageAttributes\n"); 
              $$ = construct_value_number(41, NULL); 
          }
|
E_NoContraction{ 
              //printf("Enum: NoContraction\n"); 
              $$ = construct_value_number(42, NULL); 
          }
|
E_InputAttachmentIndex{ 
              //printf("Enum: InputAttachmentIndex\n"); 
              $$ = construct_value_number(43, NULL); 
          }
|
E_Alignment{ 
              //printf("Enum: Alignment\n"); 
              $$ = construct_value_number(44, NULL); 
          }
|
E_MaxByteOffset{ 
              //printf("Enum: MaxByteOffset\n"); 
              $$ = construct_value_number(45, NULL); 
          }
|
E_AlignmentId{ 
              //printf("Enum: AlignmentId\n"); 
              $$ = construct_value_number(46, NULL); 
          }
|
E_MaxByteOffsetId{ 
              //printf("Enum: MaxByteOffsetId\n"); 
              $$ = construct_value_number(47, NULL); 
          }
|
E_ExplicitInterpAMD{ 
              //printf("Enum: ExplicitInterpAMD\n"); 
              $$ = construct_value_number(4999, NULL); 
          }
|
E_OverrideCoverageNV{ 
              //printf("Enum: OverrideCoverageNV\n"); 
              $$ = construct_value_number(5248, NULL); 
          }
|
E_PassthroughNV{ 
              //printf("Enum: PassthroughNV\n"); 
              $$ = construct_value_number(5250, NULL); 
          }
|
E_ViewportRelativeNV{ 
              //printf("Enum: ViewportRelativeNV\n"); 
              $$ = construct_value_number(5252, NULL); 
          }
|
E_SecondaryViewportRelativeNV{ 
              //printf("Enum: SecondaryViewportRelativeNV\n"); 
              $$ = construct_value_number(5256, NULL); 
          }
|
E_NonUniformEXT{ 
              //printf("Enum: NonUniformEXT\n"); 
              $$ = construct_value_number(5300, NULL); 
          }
|
E_HlslCounterBufferGOOGLE{ 
              //printf("Enum: HlslCounterBufferGOOGLE\n"); 
              $$ = construct_value_number(5634, NULL); 
          }
|
E_HlslSemanticGOOGLE{ 
              //printf("Enum: HlslSemanticGOOGLE\n"); 
              $$ = construct_value_number(5635, NULL); 
          }
|
E_Position{ 
              //printf("Enum: Position\n"); 
              $$ = construct_value_number(0, NULL); 
          }
|
E_PointSize{ 
              //printf("Enum: PointSize\n"); 
              $$ = construct_value_number(1, NULL); 
          }
|
E_ClipDistance{ 
              //printf("Enum: ClipDistance\n"); 
              $$ = construct_value_number(32, NULL); 
          }
|
E_CullDistance{ 
              //printf("Enum: CullDistance\n"); 
              $$ = construct_value_number(33, NULL); 
          }
|
E_VertexId{ 
              //printf("Enum: VertexId\n"); 
              $$ = construct_value_number(5, NULL); 
          }
|
E_InstanceId{ 
              //printf("Enum: InstanceId\n"); 
              $$ = construct_value_number(6, NULL); 
          }
|
E_PrimitiveId{ 
              //printf("Enum: PrimitiveId\n"); 
              $$ = construct_value_number(7, NULL); 
          }
|
E_InvocationId{ 
              //printf("Enum: InvocationId\n"); 
              $$ = construct_value_number(8, NULL); 
          }
|
E_Layer{ 
              //printf("Enum: Layer\n"); 
              $$ = construct_value_number(9, NULL); 
          }
|
E_ViewportIndex{ 
              //printf("Enum: ViewportIndex\n"); 
              $$ = construct_value_number(10, NULL); 
          }
|
E_TessLevelOuter{ 
              //printf("Enum: TessLevelOuter\n"); 
              $$ = construct_value_number(11, NULL); 
          }
|
E_TessLevelInner{ 
              //printf("Enum: TessLevelInner\n"); 
              $$ = construct_value_number(12, NULL); 
          }
|
E_TessCoord{ 
              //printf("Enum: TessCoord\n"); 
              $$ = construct_value_number(13, NULL); 
          }
|
E_PatchVertices{ 
              //printf("Enum: PatchVertices\n"); 
              $$ = construct_value_number(14, NULL); 
          }
|
E_FragCoord{ 
              //printf("Enum: FragCoord\n"); 
              $$ = construct_value_number(15, NULL); 
          }
|
E_PointCoord{ 
              //printf("Enum: PointCoord\n"); 
              $$ = construct_value_number(16, NULL); 
          }
|
E_FrontFacing{ 
              //printf("Enum: FrontFacing\n"); 
              $$ = construct_value_number(17, NULL); 
          }
|
E_SampleId{ 
              //printf("Enum: SampleId\n"); 
              $$ = construct_value_number(18, NULL); 
          }
|
E_SamplePosition{ 
              //printf("Enum: SamplePosition\n"); 
              $$ = construct_value_number(19, NULL); 
          }
|
E_SampleMask{ 
              //printf("Enum: SampleMask\n"); 
              $$ = construct_value_number(20, NULL); 
          }
|
E_FragDepth{ 
              //printf("Enum: FragDepth\n"); 
              $$ = construct_value_number(22, NULL); 
          }
|
E_HelperInvocation{ 
              //printf("Enum: HelperInvocation\n"); 
              $$ = construct_value_number(23, NULL); 
          }
|
E_NumWorkgroups{ 
              //printf("Enum: NumWorkgroups\n"); 
              $$ = construct_value_number(24, NULL); 
          }
|
E_WorkgroupSize{ 
              //printf("Enum: WorkgroupSize\n"); 
              $$ = construct_value_number(25, NULL); 
          }
|
E_WorkgroupId{ 
              //printf("Enum: WorkgroupId\n"); 
              $$ = construct_value_number(26, NULL); 
          }
|
E_LocalInvocationId{ 
              //printf("Enum: LocalInvocationId\n"); 
              $$ = construct_value_number(27, NULL); 
          }
|
E_GlobalInvocationId{ 
              //printf("Enum: GlobalInvocationId\n"); 
              $$ = construct_value_number(28, NULL); 
          }
|
E_LocalInvocationIndex{ 
              //printf("Enum: LocalInvocationIndex\n"); 
              $$ = construct_value_number(29, NULL); 
          }
|
E_WorkDim{ 
              //printf("Enum: WorkDim\n"); 
              $$ = construct_value_number(30, NULL); 
          }
|
E_GlobalSize{ 
              //printf("Enum: GlobalSize\n"); 
              $$ = construct_value_number(31, NULL); 
          }
|
E_EnqueuedWorkgroupSize{ 
              //printf("Enum: EnqueuedWorkgroupSize\n"); 
              $$ = construct_value_number(32, NULL); 
          }
|
E_GlobalOffset{ 
              //printf("Enum: GlobalOffset\n"); 
              $$ = construct_value_number(33, NULL); 
          }
|
E_GlobalLinearId{ 
              //printf("Enum: GlobalLinearId\n"); 
              $$ = construct_value_number(34, NULL); 
          }
|
E_SubgroupMaxSize{ 
              //printf("Enum: SubgroupMaxSize\n"); 
              $$ = construct_value_number(37, NULL); 
          }
|
E_NumSubgroups{ 
              //printf("Enum: NumSubgroups\n"); 
              $$ = construct_value_number(38, NULL); 
          }
|
E_NumEnqueuedSubgroups{ 
              //printf("Enum: NumEnqueuedSubgroups\n"); 
              $$ = construct_value_number(39, NULL); 
          }
|
E_SubgroupId{ 
              //printf("Enum: SubgroupId\n"); 
              $$ = construct_value_number(40, NULL); 
          }
|
E_SubgroupLocalInvocationId{ 
              //printf("Enum: SubgroupLocalInvocationId\n"); 
              $$ = construct_value_number(41, NULL); 
          }
|
E_VertexIndex{ 
              //printf("Enum: VertexIndex\n"); 
              $$ = construct_value_number(42, NULL); 
          }
|
E_InstanceIndex{ 
              //printf("Enum: InstanceIndex\n"); 
              $$ = construct_value_number(43, NULL); 
          }
|
E_SubgroupEqMask{ 
              //printf("Enum: SubgroupEqMask\n"); 
              $$ = construct_value_number(4416, NULL); 
          }
|
E_SubgroupGeMask{ 
              //printf("Enum: SubgroupGeMask\n"); 
              $$ = construct_value_number(4417, NULL); 
          }
|
E_SubgroupGtMask{ 
              //printf("Enum: SubgroupGtMask\n"); 
              $$ = construct_value_number(4418, NULL); 
          }
|
E_SubgroupLeMask{ 
              //printf("Enum: SubgroupLeMask\n"); 
              $$ = construct_value_number(4419, NULL); 
          }
|
E_SubgroupLtMask{ 
              //printf("Enum: SubgroupLtMask\n"); 
              $$ = construct_value_number(4420, NULL); 
          }
|
E_SubgroupEqMaskKHR{ 
              //printf("Enum: SubgroupEqMaskKHR\n"); 
              $$ = construct_value_number(4416, NULL); 
          }
|
E_SubgroupGeMaskKHR{ 
              //printf("Enum: SubgroupGeMaskKHR\n"); 
              $$ = construct_value_number(4417, NULL); 
          }
|
E_SubgroupGtMaskKHR{ 
              //printf("Enum: SubgroupGtMaskKHR\n"); 
              $$ = construct_value_number(4418, NULL); 
          }
|
E_SubgroupLeMaskKHR{ 
              //printf("Enum: SubgroupLeMaskKHR\n"); 
              $$ = construct_value_number(4419, NULL); 
          }
|
E_SubgroupLtMaskKHR{ 
              //printf("Enum: SubgroupLtMaskKHR\n"); 
              $$ = construct_value_number(4420, NULL); 
          }
|
E_BaseVertex{ 
              //printf("Enum: BaseVertex\n"); 
              $$ = construct_value_number(4424, NULL); 
          }
|
E_BaseInstance{ 
              //printf("Enum: BaseInstance\n"); 
              $$ = construct_value_number(4425, NULL); 
          }
|
E_DrawIndex{ 
              //printf("Enum: DrawIndex\n"); 
              $$ = construct_value_number(4426, NULL); 
          }
|
E_DeviceIndex{ 
              //printf("Enum: DeviceIndex\n"); 
              $$ = construct_value_number(4438, NULL); 
          }
|
E_ViewIndex{ 
              //printf("Enum: ViewIndex\n"); 
              $$ = construct_value_number(4440, NULL); 
          }
|
E_BaryCoordNoPerspAMD{ 
              //printf("Enum: BaryCoordNoPerspAMD\n"); 
              $$ = construct_value_number(4992, NULL); 
          }
|
E_BaryCoordNoPerspCentroidAMD{ 
              //printf("Enum: BaryCoordNoPerspCentroidAMD\n"); 
              $$ = construct_value_number(4993, NULL); 
          }
|
E_BaryCoordNoPerspSampleAMD{ 
              //printf("Enum: BaryCoordNoPerspSampleAMD\n"); 
              $$ = construct_value_number(4994, NULL); 
          }
|
E_BaryCoordSmoothAMD{ 
              //printf("Enum: BaryCoordSmoothAMD\n"); 
              $$ = construct_value_number(4995, NULL); 
          }
|
E_BaryCoordSmoothCentroidAMD{ 
              //printf("Enum: BaryCoordSmoothCentroidAMD\n"); 
              $$ = construct_value_number(4996, NULL); 
          }
|
E_BaryCoordSmoothSampleAMD{ 
              //printf("Enum: BaryCoordSmoothSampleAMD\n"); 
              $$ = construct_value_number(4997, NULL); 
          }
|
E_BaryCoordPullModelAMD{ 
              //printf("Enum: BaryCoordPullModelAMD\n"); 
              $$ = construct_value_number(4998, NULL); 
          }
|
E_FragStencilRefEXT{ 
              //printf("Enum: FragStencilRefEXT\n"); 
              $$ = construct_value_number(5014, NULL); 
          }
|
E_ViewportMaskNV{ 
              //printf("Enum: ViewportMaskNV\n"); 
              $$ = construct_value_number(5253, NULL); 
          }
|
E_SecondaryPositionNV{ 
              //printf("Enum: SecondaryPositionNV\n"); 
              $$ = construct_value_number(5257, NULL); 
          }
|
E_SecondaryViewportMaskNV{ 
              //printf("Enum: SecondaryViewportMaskNV\n"); 
              $$ = construct_value_number(5258, NULL); 
          }
|
E_PositionPerViewNV{ 
              //printf("Enum: PositionPerViewNV\n"); 
              $$ = construct_value_number(5261, NULL); 
          }
|
E_ViewportMaskPerViewNV{ 
              //printf("Enum: ViewportMaskPerViewNV\n"); 
              $$ = construct_value_number(5262, NULL); 
          }
|
E_FullyCoveredEXT{ 
              //printf("Enum: FullyCoveredEXT\n"); 
              $$ = construct_value_number(5264, NULL); 
          }
|
E_Flatten{ 
              //printf("Enum: Flatten\n"); 
              $$ = construct_value_number(0x1, NULL); 
          }
|
E_DontFlatten{ 
              //printf("Enum: DontFlatten\n"); 
              $$ = construct_value_number(0x2, NULL); 
          }
|
E_Unroll{ 
              //printf("Enum: Unroll\n"); 
              $$ = construct_value_number(0x1, NULL); 
          }
|
E_DontUnroll{ 
              //printf("Enum: DontUnroll\n"); 
              $$ = construct_value_number(0x2, NULL); 
          }
|
E_DependencyInfinite{ 
              //printf("Enum: DependencyInfinite\n"); 
              $$ = construct_value_number(0x4, NULL); 
          }
|
E_DependencyLength{ 
              //printf("Enum: DependencyLength\n"); 
              $$ = construct_value_number(0x8, NULL); 
          }
|
E_Inline{ 
              //printf("Enum: Inline\n"); 
              $$ = construct_value_number(0x1, NULL); 
          }
|
E_DontInline{ 
              //printf("Enum: DontInline\n"); 
              $$ = construct_value_number(0x2, NULL); 
          }
|
E_Pure{ 
              //printf("Enum: Pure\n"); 
              $$ = construct_value_number(0x4, NULL); 
          }
|
E_Const{ 
              //printf("Enum: Const\n"); 
              $$ = construct_value_number(0x8, NULL); 
          }
|
E_Acquire{ 
              //printf("Enum: Acquire\n"); 
              $$ = construct_value_number(0x2, NULL); 
          }
|
E_Release{ 
              //printf("Enum: Release\n"); 
              $$ = construct_value_number(0x4, NULL); 
          }
|
E_AcquireRelease{ 
              //printf("Enum: AcquireRelease\n"); 
              $$ = construct_value_number(0x8, NULL); 
          }
|
E_SequentiallyConsistent{ 
              //printf("Enum: SequentiallyConsistent\n"); 
              $$ = construct_value_number(0x10, NULL); 
          }
|
E_UniformMemory{ 
              //printf("Enum: UniformMemory\n"); 
              $$ = construct_value_number(0x40, NULL); 
          }
|
E_SubgroupMemory{ 
              //printf("Enum: SubgroupMemory\n"); 
              $$ = construct_value_number(0x80, NULL); 
          }
|
E_WorkgroupMemory{ 
              //printf("Enum: WorkgroupMemory\n"); 
              $$ = construct_value_number(0x100, NULL); 
          }
|
E_CrossWorkgroupMemory{ 
              //printf("Enum: CrossWorkgroupMemory\n"); 
              $$ = construct_value_number(0x200, NULL); 
          }
|
E_AtomicCounterMemory{ 
              //printf("Enum: AtomicCounterMemory\n"); 
              $$ = construct_value_number(0x400, NULL); 
          }
|
E_ImageMemory{ 
              //printf("Enum: ImageMemory\n"); 
              $$ = construct_value_number(0x800, NULL); 
          }
|
E_Aligned{ 
              //printf("Enum: Aligned\n"); 
              $$ = construct_value_number(0x2, NULL); 
          }
|
E_Nontemporal{ 
              //printf("Enum: Nontemporal\n"); 
              $$ = construct_value_number(0x4, NULL); 
          }
|
E_CrossDevice{ 
              //printf("Enum: CrossDevice\n"); 
              $$ = construct_value_number(0, NULL); 
          }
|
E_Device{ 
              //printf("Enum: Device\n"); 
              $$ = construct_value_number(1, NULL); 
          }
|
E_Subgroup{ 
              //printf("Enum: Subgroup\n"); 
              $$ = construct_value_number(3, NULL); 
          }
|
E_Invocation{ 
              //printf("Enum: Invocation\n"); 
              $$ = construct_value_number(4, NULL); 
          }
|
E_Reduce{ 
              //printf("Enum: Reduce\n"); 
              $$ = construct_value_number(0, NULL); 
          }
|
E_InclusiveScan{ 
              //printf("Enum: InclusiveScan\n"); 
              $$ = construct_value_number(1, NULL); 
          }
|
E_ExclusiveScan{ 
              //printf("Enum: ExclusiveScan\n"); 
              $$ = construct_value_number(2, NULL); 
          }
|
E_ClusteredReduce{ 
              //printf("Enum: ClusteredReduce\n"); 
              $$ = construct_value_number(3, NULL); 
          }
|
E_PartitionedReduceNV{ 
              //printf("Enum: PartitionedReduceNV\n"); 
              $$ = construct_value_number(6, NULL); 
          }
|
E_PartitionedInclusiveScanNV{ 
              //printf("Enum: PartitionedInclusiveScanNV\n"); 
              $$ = construct_value_number(7, NULL); 
          }
|
E_PartitionedExclusiveScanNV{ 
              //printf("Enum: PartitionedExclusiveScanNV\n"); 
              $$ = construct_value_number(8, NULL); 
          }
|
E_NoWait{ 
              //printf("Enum: NoWait\n"); 
              $$ = construct_value_number(0, NULL); 
          }
|
E_WaitKernel{ 
              //printf("Enum: WaitKernel\n"); 
              $$ = construct_value_number(1, NULL); 
          }
|
E_WaitWorkGroup{ 
              //printf("Enum: WaitWorkGroup\n"); 
              $$ = construct_value_number(2, NULL); 
          }
|
E_CmdExecTime{ 
              //printf("Enum: CmdExecTime\n"); 
              $$ = construct_value_number(0x1, NULL); 
          }
|
E_Matrix{ 
              //printf("Enum: Matrix\n"); 
              $$ = construct_value_number(0, NULL); 
          }
|
E_Shader{ 
              //printf("Enum: Shader\n"); 
              $$ = construct_value_number(1, NULL); 
          }
|
E_Tessellation{ 
              //printf("Enum: Tessellation\n"); 
              $$ = construct_value_number(3, NULL); 
          }
|
E_Addresses{ 
              //printf("Enum: Addresses\n"); 
              $$ = construct_value_number(4, NULL); 
          }
|
E_Linkage{ 
              //printf("Enum: Linkage\n"); 
              $$ = construct_value_number(5, NULL); 
          }
|
E_Vector16{ 
              //printf("Enum: Vector16\n"); 
              $$ = construct_value_number(7, NULL); 
          }
|
E_Float16Buffer{ 
              //printf("Enum: Float16Buffer\n"); 
              $$ = construct_value_number(8, NULL); 
          }
|
E_Float16{ 
              //printf("Enum: Float16\n"); 
              $$ = construct_value_number(9, NULL); 
          }
|
E_Float64{ 
              //printf("Enum: Float64\n"); 
              $$ = construct_value_number(10, NULL); 
          }
|
E_Int64{ 
              //printf("Enum: Int64\n"); 
              $$ = construct_value_number(11, NULL); 
          }
|
E_Int64Atomics{ 
              //printf("Enum: Int64Atomics\n"); 
              $$ = construct_value_number(12, NULL); 
          }
|
E_ImageBasic{ 
              //printf("Enum: ImageBasic\n"); 
              $$ = construct_value_number(13, NULL); 
          }
|
E_ImageReadWrite{ 
              //printf("Enum: ImageReadWrite\n"); 
              $$ = construct_value_number(14, NULL); 
          }
|
E_ImageMipmap{ 
              //printf("Enum: ImageMipmap\n"); 
              $$ = construct_value_number(15, NULL); 
          }
|
E_Pipes{ 
              //printf("Enum: Pipes\n"); 
              $$ = construct_value_number(17, NULL); 
          }
|
E_Groups{ 
              //printf("Enum: Groups\n"); 
              $$ = construct_value_number(18, NULL); 
          }
|
E_DeviceEnqueue{ 
              //printf("Enum: DeviceEnqueue\n"); 
              $$ = construct_value_number(19, NULL); 
          }
|
E_LiteralSampler{ 
              //printf("Enum: LiteralSampler\n"); 
              $$ = construct_value_number(20, NULL); 
          }
|
E_AtomicStorage{ 
              //printf("Enum: AtomicStorage\n"); 
              $$ = construct_value_number(21, NULL); 
          }
|
E_Int16{ 
              //printf("Enum: Int16\n"); 
              $$ = construct_value_number(22, NULL); 
          }
|
E_TessellationPointSize{ 
              //printf("Enum: TessellationPointSize\n"); 
              $$ = construct_value_number(23, NULL); 
          }
|
E_GeometryPointSize{ 
              //printf("Enum: GeometryPointSize\n"); 
              $$ = construct_value_number(24, NULL); 
          }
|
E_ImageGatherExtended{ 
              //printf("Enum: ImageGatherExtended\n"); 
              $$ = construct_value_number(25, NULL); 
          }
|
E_StorageImageMultisample{ 
              //printf("Enum: StorageImageMultisample\n"); 
              $$ = construct_value_number(27, NULL); 
          }
|
E_UniformBufferArrayDynamicIndexing{ 
              //printf("Enum: UniformBufferArrayDynamicIndexing\n"); 
              $$ = construct_value_number(28, NULL); 
          }
|
E_SampledImageArrayDynamicIndexing{ 
              //printf("Enum: SampledImageArrayDynamicIndexing\n"); 
              $$ = construct_value_number(29, NULL); 
          }
|
E_StorageBufferArrayDynamicIndexing{ 
              //printf("Enum: StorageBufferArrayDynamicIndexing\n"); 
              $$ = construct_value_number(30, NULL); 
          }
|
E_StorageImageArrayDynamicIndexing{ 
              //printf("Enum: StorageImageArrayDynamicIndexing\n"); 
              $$ = construct_value_number(31, NULL); 
          }
|
E_ImageCubeArray{ 
              //printf("Enum: ImageCubeArray\n"); 
              $$ = construct_value_number(34, NULL); 
          }
|
E_SampleRateShading{ 
              //printf("Enum: SampleRateShading\n"); 
              $$ = construct_value_number(35, NULL); 
          }
|
E_ImageRect{ 
              //printf("Enum: ImageRect\n"); 
              $$ = construct_value_number(36, NULL); 
          }
|
E_SampledRect{ 
              //printf("Enum: SampledRect\n"); 
              $$ = construct_value_number(37, NULL); 
          }
|
E_GenericPointer{ 
              //printf("Enum: GenericPointer\n"); 
              $$ = construct_value_number(38, NULL); 
          }
|
E_Int8{ 
              //printf("Enum: Int8\n"); 
              $$ = construct_value_number(39, NULL); 
          }
|
E_InputAttachment{ 
              //printf("Enum: InputAttachment\n"); 
              $$ = construct_value_number(40, NULL); 
          }
|
E_SparseResidency{ 
              //printf("Enum: SparseResidency\n"); 
              $$ = construct_value_number(41, NULL); 
          }
|
E_Sampled1D{ 
              //printf("Enum: Sampled1D\n"); 
              $$ = construct_value_number(43, NULL); 
          }
|
E_Image1D{ 
              //printf("Enum: Image1D\n"); 
              $$ = construct_value_number(44, NULL); 
          }
|
E_SampledCubeArray{ 
              //printf("Enum: SampledCubeArray\n"); 
              $$ = construct_value_number(45, NULL); 
          }
|
E_SampledBuffer{ 
              //printf("Enum: SampledBuffer\n"); 
              $$ = construct_value_number(46, NULL); 
          }
|
E_ImageBuffer{ 
              //printf("Enum: ImageBuffer\n"); 
              $$ = construct_value_number(47, NULL); 
          }
|
E_ImageMSArray{ 
              //printf("Enum: ImageMSArray\n"); 
              $$ = construct_value_number(48, NULL); 
          }
|
E_StorageImageExtendedFormats{ 
              //printf("Enum: StorageImageExtendedFormats\n"); 
              $$ = construct_value_number(49, NULL); 
          }
|
E_ImageQuery{ 
              //printf("Enum: ImageQuery\n"); 
              $$ = construct_value_number(50, NULL); 
          }
|
E_DerivativeControl{ 
              //printf("Enum: DerivativeControl\n"); 
              $$ = construct_value_number(51, NULL); 
          }
|
E_InterpolationFunction{ 
              //printf("Enum: InterpolationFunction\n"); 
              $$ = construct_value_number(52, NULL); 
          }
|
E_TransformFeedback{ 
              //printf("Enum: TransformFeedback\n"); 
              $$ = construct_value_number(53, NULL); 
          }
|
E_GeometryStreams{ 
              //printf("Enum: GeometryStreams\n"); 
              $$ = construct_value_number(54, NULL); 
          }
|
E_StorageImageReadWithoutFormat{ 
              //printf("Enum: StorageImageReadWithoutFormat\n"); 
              $$ = construct_value_number(55, NULL); 
          }
|
E_StorageImageWriteWithoutFormat{ 
              //printf("Enum: StorageImageWriteWithoutFormat\n"); 
              $$ = construct_value_number(56, NULL); 
          }
|
E_MultiViewport{ 
              //printf("Enum: MultiViewport\n"); 
              $$ = construct_value_number(57, NULL); 
          }
|
E_SubgroupDispatch{ 
              //printf("Enum: SubgroupDispatch\n"); 
              $$ = construct_value_number(58, NULL); 
          }
|
E_NamedBarrier{ 
              //printf("Enum: NamedBarrier\n"); 
              $$ = construct_value_number(59, NULL); 
          }
|
E_PipeStorage{ 
              //printf("Enum: PipeStorage\n"); 
              $$ = construct_value_number(60, NULL); 
          }
|
E_GroupNonUniform{ 
              //printf("Enum: GroupNonUniform\n"); 
              $$ = construct_value_number(61, NULL); 
          }
|
E_GroupNonUniformVote{ 
              //printf("Enum: GroupNonUniformVote\n"); 
              $$ = construct_value_number(62, NULL); 
          }
|
E_GroupNonUniformArithmetic{ 
              //printf("Enum: GroupNonUniformArithmetic\n"); 
              $$ = construct_value_number(63, NULL); 
          }
|
E_GroupNonUniformBallot{ 
              //printf("Enum: GroupNonUniformBallot\n"); 
              $$ = construct_value_number(64, NULL); 
          }
|
E_GroupNonUniformShuffle{ 
              //printf("Enum: GroupNonUniformShuffle\n"); 
              $$ = construct_value_number(65, NULL); 
          }
|
E_GroupNonUniformShuffleRelative{ 
              //printf("Enum: GroupNonUniformShuffleRelative\n"); 
              $$ = construct_value_number(66, NULL); 
          }
|
E_GroupNonUniformClustered{ 
              //printf("Enum: GroupNonUniformClustered\n"); 
              $$ = construct_value_number(67, NULL); 
          }
|
E_GroupNonUniformQuad{ 
              //printf("Enum: GroupNonUniformQuad\n"); 
              $$ = construct_value_number(68, NULL); 
          }
|
E_SubgroupBallotKHR{ 
              //printf("Enum: SubgroupBallotKHR\n"); 
              $$ = construct_value_number(4423, NULL); 
          }
|
E_DrawParameters{ 
              //printf("Enum: DrawParameters\n"); 
              $$ = construct_value_number(4427, NULL); 
          }
|
E_SubgroupVoteKHR{ 
              //printf("Enum: SubgroupVoteKHR\n"); 
              $$ = construct_value_number(4431, NULL); 
          }
|
E_StorageBuffer16BitAccess{ 
              //printf("Enum: StorageBuffer16BitAccess\n"); 
              $$ = construct_value_number(4433, NULL); 
          }
|
E_StorageUniformBufferBlock16{ 
              //printf("Enum: StorageUniformBufferBlock16\n"); 
              $$ = construct_value_number(4433, NULL); 
          }
|
E_UniformAndStorageBuffer16BitAccess{ 
              //printf("Enum: UniformAndStorageBuffer16BitAccess\n"); 
              $$ = construct_value_number(4434, NULL); 
          }
|
E_StorageUniform16{ 
              //printf("Enum: StorageUniform16\n"); 
              $$ = construct_value_number(4434, NULL); 
          }
|
E_StoragePushConstant16{ 
              //printf("Enum: StoragePushConstant16\n"); 
              $$ = construct_value_number(4435, NULL); 
          }
|
E_StorageInputOutput16{ 
              //printf("Enum: StorageInputOutput16\n"); 
              $$ = construct_value_number(4436, NULL); 
          }
|
E_DeviceGroup{ 
              //printf("Enum: DeviceGroup\n"); 
              $$ = construct_value_number(4437, NULL); 
          }
|
E_MultiView{ 
              //printf("Enum: MultiView\n"); 
              $$ = construct_value_number(4439, NULL); 
          }
|
E_VariablePointersStorageBuffer{ 
              //printf("Enum: VariablePointersStorageBuffer\n"); 
              $$ = construct_value_number(4441, NULL); 
          }
|
E_VariablePointers{ 
              //printf("Enum: VariablePointers\n"); 
              $$ = construct_value_number(4442, NULL); 
          }
|
E_AtomicStorageOps{ 
              //printf("Enum: AtomicStorageOps\n"); 
              $$ = construct_value_number(4445, NULL); 
          }
|
E_SampleMaskPostDepthCoverage{ 
              //printf("Enum: SampleMaskPostDepthCoverage\n"); 
              $$ = construct_value_number(4447, NULL); 
          }
|
E_Float16ImageAMD{ 
              //printf("Enum: Float16ImageAMD\n"); 
              $$ = construct_value_number(5008, NULL); 
          }
|
E_ImageGatherBiasLodAMD{ 
              //printf("Enum: ImageGatherBiasLodAMD\n"); 
              $$ = construct_value_number(5009, NULL); 
          }
|
E_FragmentMaskAMD{ 
              //printf("Enum: FragmentMaskAMD\n"); 
              $$ = construct_value_number(5010, NULL); 
          }
|
E_StencilExportEXT{ 
              //printf("Enum: StencilExportEXT\n"); 
              $$ = construct_value_number(5013, NULL); 
          }
|
E_ImageReadWriteLodAMD{ 
              //printf("Enum: ImageReadWriteLodAMD\n"); 
              $$ = construct_value_number(5015, NULL); 
          }
|
E_SampleMaskOverrideCoverageNV{ 
              //printf("Enum: SampleMaskOverrideCoverageNV\n"); 
              $$ = construct_value_number(5249, NULL); 
          }
|
E_GeometryShaderPassthroughNV{ 
              //printf("Enum: GeometryShaderPassthroughNV\n"); 
              $$ = construct_value_number(5251, NULL); 
          }
|
E_ShaderViewportIndexLayerEXT{ 
              //printf("Enum: ShaderViewportIndexLayerEXT\n"); 
              $$ = construct_value_number(5254, NULL); 
          }
|
E_ShaderViewportIndexLayerNV{ 
              //printf("Enum: ShaderViewportIndexLayerNV\n"); 
              $$ = construct_value_number(5254, NULL); 
          }
|
E_ShaderViewportMaskNV{ 
              //printf("Enum: ShaderViewportMaskNV\n"); 
              $$ = construct_value_number(5255, NULL); 
          }
|
E_ShaderStereoViewNV{ 
              //printf("Enum: ShaderStereoViewNV\n"); 
              $$ = construct_value_number(5259, NULL); 
          }
|
E_PerViewAttributesNV{ 
              //printf("Enum: PerViewAttributesNV\n"); 
              $$ = construct_value_number(5260, NULL); 
          }
|
E_FragmentFullyCoveredEXT{ 
              //printf("Enum: FragmentFullyCoveredEXT\n"); 
              $$ = construct_value_number(5265, NULL); 
          }
|
E_ShaderNonUniformEXT{ 
              //printf("Enum: ShaderNonUniformEXT\n"); 
              $$ = construct_value_number(5301, NULL); 
          }
|
E_RuntimeDescriptorArrayEXT{ 
              //printf("Enum: RuntimeDescriptorArrayEXT\n"); 
              $$ = construct_value_number(5302, NULL); 
          }
|
E_InputAttachmentArrayDynamicIndexingEXT{ 
              //printf("Enum: InputAttachmentArrayDynamicIndexingEXT\n"); 
              $$ = construct_value_number(5303, NULL); 
          }
|
E_UniformTexelBufferArrayDynamicIndexingEXT{ 
              //printf("Enum: UniformTexelBufferArrayDynamicIndexingEXT\n"); 
              $$ = construct_value_number(5304, NULL); 
          }
|
E_StorageTexelBufferArrayDynamicIndexingEXT{ 
              //printf("Enum: StorageTexelBufferArrayDynamicIndexingEXT\n"); 
              $$ = construct_value_number(5305, NULL); 
          }
|
E_UniformBufferArrayNonUniformIndexingEXT{ 
              //printf("Enum: UniformBufferArrayNonUniformIndexingEXT\n"); 
              $$ = construct_value_number(5306, NULL); 
          }
|
E_SampledImageArrayNonUniformIndexingEXT{ 
              //printf("Enum: SampledImageArrayNonUniformIndexingEXT\n"); 
              $$ = construct_value_number(5307, NULL); 
          }
|
E_StorageBufferArrayNonUniformIndexingEXT{ 
              //printf("Enum: StorageBufferArrayNonUniformIndexingEXT\n"); 
              $$ = construct_value_number(5308, NULL); 
          }
|
E_StorageImageArrayNonUniformIndexingEXT{ 
              //printf("Enum: StorageImageArrayNonUniformIndexingEXT\n"); 
              $$ = construct_value_number(5309, NULL); 
          }
|
E_InputAttachmentArrayNonUniformIndexingEXT{ 
              //printf("Enum: InputAttachmentArrayNonUniformIndexingEXT\n"); 
              $$ = construct_value_number(5310, NULL); 
          }
|
E_UniformTexelBufferArrayNonUniformIndexingEXT{ 
              //printf("Enum: UniformTexelBufferArrayNonUniformIndexingEXT\n"); 
              $$ = construct_value_number(5311, NULL); 
          }
|
E_StorageTexelBufferArrayNonUniformIndexingEXT{ 
              //printf("Enum: StorageTexelBufferArrayNonUniformIndexingEXT\n"); 
              $$ = construct_value_number(5312, NULL); 
          }
|
E_SubgroupShuffleINTEL{ 
              //printf("Enum: SubgroupShuffleINTEL\n"); 
              $$ = construct_value_number(5568, NULL); 
          }
|
E_SubgroupBufferBlockIOINTEL{ 
              //printf("Enum: SubgroupBufferBlockIOINTEL\n"); 
              $$ = construct_value_number(5569, NULL); 
          }
|
E_SubgroupImageBlockIOINTEL{ 
              //printf("Enum: SubgroupImageBlockIOINTEL\n"); 
              $$ = construct_value_number(5570, NULL); 
          }
|
E_GroupNonUniformPartitionedNV{ 
              //printf("Enum: GroupNonUniformPartitionedNV\n"); 
              $$ = construct_value_number(5297, NULL); 
          }
|
E_Round{ 
              //printf("Enum: Round\n"); 
              $$ = construct_value_number(1, NULL); 
          }
|
E_RoundEven{ 
              //printf("Enum: RoundEven\n"); 
              $$ = construct_value_number(2, NULL); 
          }
|
E_Trunc{ 
              //printf("Enum: Trunc\n"); 
              $$ = construct_value_number(3, NULL); 
          }
|
E_FAbs{ 
              //printf("Enum: FAbs\n"); 
              $$ = construct_value_number(4, NULL); 
          }
|
E_SAbs{ 
              //printf("Enum: SAbs\n"); 
              $$ = construct_value_number(5, NULL); 
          }
|
E_FSign{ 
              //printf("Enum: FSign\n"); 
              $$ = construct_value_number(6, NULL); 
          }
|
E_SSign{ 
              //printf("Enum: SSign\n"); 
              $$ = construct_value_number(7, NULL); 
          }
|
E_Floor{ 
              //printf("Enum: Floor\n"); 
              $$ = construct_value_number(8, NULL); 
          }
|
E_Ceil{ 
              //printf("Enum: Ceil\n"); 
              $$ = construct_value_number(9, NULL); 
          }
|
E_Fract{ 
              //printf("Enum: Fract\n"); 
              $$ = construct_value_number(10, NULL); 
          }
|
E_Radians{ 
              //printf("Enum: Radians\n"); 
              $$ = construct_value_number(11, NULL); 
          }
|
E_Degrees{ 
              //printf("Enum: Degrees\n"); 
              $$ = construct_value_number(12, NULL); 
          }
|
E_Sin{ 
              //printf("Enum: Sin\n"); 
              $$ = construct_value_number(13, NULL); 
          }
|
E_Cos{ 
              //printf("Enum: Cos\n"); 
              $$ = construct_value_number(14, NULL); 
          }
|
E_Tan{ 
              //printf("Enum: Tan\n"); 
              $$ = construct_value_number(15, NULL); 
          }
|
E_Asin{ 
              //printf("Enum: Asin\n"); 
              $$ = construct_value_number(16, NULL); 
          }
|
E_Acos{ 
              //printf("Enum: Acos\n"); 
              $$ = construct_value_number(17, NULL); 
          }
|
E_Atan{ 
              //printf("Enum: Atan\n"); 
              $$ = construct_value_number(18, NULL); 
          }
|
E_Sinh{ 
              //printf("Enum: Sinh\n"); 
              $$ = construct_value_number(19, NULL); 
          }
|
E_Cosh{ 
              //printf("Enum: Cosh\n"); 
              $$ = construct_value_number(20, NULL); 
          }
|
E_Tanh{ 
              //printf("Enum: Tanh\n"); 
              $$ = construct_value_number(21, NULL); 
          }
|
E_Asinh{ 
              //printf("Enum: Asinh\n"); 
              $$ = construct_value_number(22, NULL); 
          }
|
E_Acosh{ 
              //printf("Enum: Acosh\n"); 
              $$ = construct_value_number(23, NULL); 
          }
|
E_Atanh{ 
              //printf("Enum: Atanh\n"); 
              $$ = construct_value_number(24, NULL); 
          }
|
E_Atan2{ 
              //printf("Enum: Atan2\n"); 
              $$ = construct_value_number(25, NULL); 
          }
|
E_Pow{ 
              //printf("Enum: Pow\n"); 
              $$ = construct_value_number(26, NULL); 
          }
|
E_Exp{ 
              //printf("Enum: Exp\n"); 
              $$ = construct_value_number(27, NULL); 
          }
|
E_Log{ 
              //printf("Enum: Log\n"); 
              $$ = construct_value_number(28, NULL); 
          }
|
E_Exp2{ 
              //printf("Enum: Exp2\n"); 
              $$ = construct_value_number(29, NULL); 
          }
|
E_Log2{ 
              //printf("Enum: Log2\n"); 
              $$ = construct_value_number(30, NULL); 
          }
|
E_Sqrt{ 
              //printf("Enum: Sqrt\n"); 
              $$ = construct_value_number(31, NULL); 
          }
|
E_InverseSqrt{ 
              //printf("Enum: InverseSqrt\n"); 
              $$ = construct_value_number(32, NULL); 
          }
|
E_Determinant{ 
              //printf("Enum: Determinant\n"); 
              $$ = construct_value_number(33, NULL); 
          }
|
E_MatrixInverse{ 
              //printf("Enum: MatrixInverse\n"); 
              $$ = construct_value_number(34, NULL); 
          }
|
E_Modf{ 
              //printf("Enum: Modf\n"); 
              $$ = construct_value_number(35, NULL); 
          }
|
E_ModfStruct{ 
              //printf("Enum: ModfStruct\n"); 
              $$ = construct_value_number(36, NULL); 
          }
|
E_FMin{ 
              //printf("Enum: FMin\n"); 
              $$ = construct_value_number(37, NULL); 
          }
|
E_UMin{ 
              //printf("Enum: UMin\n"); 
              $$ = construct_value_number(38, NULL); 
          }
|
E_SMin{ 
              //printf("Enum: SMin\n"); 
              $$ = construct_value_number(39, NULL); 
          }
|
E_FMax{ 
              //printf("Enum: FMax\n"); 
              $$ = construct_value_number(40, NULL); 
          }
|
E_UMax{ 
              //printf("Enum: UMax\n"); 
              $$ = construct_value_number(41, NULL); 
          }
|
E_SMax{ 
              //printf("Enum: SMax\n"); 
              $$ = construct_value_number(42, NULL); 
          }
|
E_FClamp{ 
              //printf("Enum: FClamp\n"); 
              $$ = construct_value_number(43, NULL); 
          }
|
E_UClamp{ 
              //printf("Enum: UClamp\n"); 
              $$ = construct_value_number(44, NULL); 
          }
|
E_SClamp{ 
              //printf("Enum: SClamp\n"); 
              $$ = construct_value_number(45, NULL); 
          }
|
E_FMix{ 
              //printf("Enum: FMix\n"); 
              $$ = construct_value_number(46, NULL); 
          }
|
E_Step{ 
              //printf("Enum: Step\n"); 
              $$ = construct_value_number(48, NULL); 
          }
|
E_SmoothStep{ 
              //printf("Enum: SmoothStep\n"); 
              $$ = construct_value_number(49, NULL); 
          }
|
E_Fma{ 
              //printf("Enum: Fma\n"); 
              $$ = construct_value_number(50, NULL); 
          }
|
E_Frexp{ 
              //printf("Enum: Frexp\n"); 
              $$ = construct_value_number(51, NULL); 
          }
|
E_FrexpStruct{ 
              //printf("Enum: FrexpStruct\n"); 
              $$ = construct_value_number(52, NULL); 
          }
|
E_Ldexp{ 
              //printf("Enum: Ldexp\n"); 
              $$ = construct_value_number(53, NULL); 
          }
|
E_PackSnorm4x8{ 
              //printf("Enum: PackSnorm4x8\n"); 
              $$ = construct_value_number(54, NULL); 
          }
|
E_PackUnorm4x8{ 
              //printf("Enum: PackUnorm4x8\n"); 
              $$ = construct_value_number(55, NULL); 
          }
|
E_PackSnorm2x16{ 
              //printf("Enum: PackSnorm2x16\n"); 
              $$ = construct_value_number(56, NULL); 
          }
|
E_PackUnorm2x16{ 
              //printf("Enum: PackUnorm2x16\n"); 
              $$ = construct_value_number(57, NULL); 
          }
|
E_PackHalf2x16{ 
              //printf("Enum: PackHalf2x16\n"); 
              $$ = construct_value_number(58, NULL); 
          }
|
E_PackDouble2x32{ 
              //printf("Enum: PackDouble2x32\n"); 
              $$ = construct_value_number(59, NULL); 
          }
|
E_UnpackSnorm2x16{ 
              //printf("Enum: UnpackSnorm2x16\n"); 
              $$ = construct_value_number(60, NULL); 
          }
|
E_UnpackUnorm2x16{ 
              //printf("Enum: UnpackUnorm2x16\n"); 
              $$ = construct_value_number(61, NULL); 
          }
|
E_UnpackHalf2x16{ 
              //printf("Enum: UnpackHalf2x16\n"); 
              $$ = construct_value_number(62, NULL); 
          }
|
E_UnpackSnorm4x8{ 
              //printf("Enum: UnpackSnorm4x8\n"); 
              $$ = construct_value_number(63, NULL); 
          }
|
E_UnpackUnorm4x8{ 
              //printf("Enum: UnpackUnorm4x8\n"); 
              $$ = construct_value_number(64, NULL); 
          }
|
E_UnpackDouble2x32{ 
              //printf("Enum: UnpackDouble2x32\n"); 
              $$ = construct_value_number(65, NULL); 
          }
|
E_Length{ 
              //printf("Enum: Length\n"); 
              $$ = construct_value_number(66, NULL); 
          }
|
E_Distance{ 
              //printf("Enum: Distance\n"); 
              $$ = construct_value_number(67, NULL); 
          }
|
E_Cross{ 
              //printf("Enum: Cross\n"); 
              $$ = construct_value_number(68, NULL); 
          }
|
E_Normalize{ 
              //printf("Enum: Normalize\n"); 
              $$ = construct_value_number(69, NULL); 
          }
|
E_FaceForward{ 
              //printf("Enum: FaceForward\n"); 
              $$ = construct_value_number(70, NULL); 
          }
|
E_Reflect{ 
              //printf("Enum: Reflect\n"); 
              $$ = construct_value_number(71, NULL); 
          }
|
E_Refract{ 
              //printf("Enum: Refract\n"); 
              $$ = construct_value_number(72, NULL); 
          }
|
E_FindILsb{ 
              //printf("Enum: FindILsb\n"); 
              $$ = construct_value_number(73, NULL); 
          }
|
E_FindSMsb{ 
              //printf("Enum: FindSMsb\n"); 
              $$ = construct_value_number(74, NULL); 
          }
|
E_FindUMsb{ 
              //printf("Enum: FindUMsb\n"); 
              $$ = construct_value_number(75, NULL); 
          }
|
E_InterpolateAtCentroid{ 
              //printf("Enum: InterpolateAtCentroid\n"); 
              $$ = construct_value_number(76, NULL); 
          }
|
E_InterpolateAtSample{ 
              //printf("Enum: InterpolateAtSample\n"); 
              $$ = construct_value_number(77, NULL); 
          }
|
E_InterpolateAtOffset{ 
              //printf("Enum: InterpolateAtOffset\n"); 
              $$ = construct_value_number(78, NULL); 
          }
|
E_NMin{ 
              //printf("Enum: NMin\n"); 
              $$ = construct_value_number(79, NULL); 
          }
|
E_NMax{ 
              //printf("Enum: NMax\n"); 
              $$ = construct_value_number(80, NULL); 
          }
|
E_NClamp{ 
              //printf("Enum: NClamp\n"); 
              $$ = construct_value_number(81, NULL); 
          }
|
number_reference { 
      $$ = $1; 
      } | 

STRING { 
          char* c = (char*)malloc(strlen(yytext)-1); 
          memcpy(c, yytext + 1, strlen(yytext) - 2); 
          c[strlen(yytext) - 2] = 0; 
          $$ = construct_value_string(c, NULL); 
      } | 

identifier_reference { 
          $$ = $1; 
      };
identifier_reference: IDENTIFIER { 
          $$ = construct_value_identifier(strdup(yytext), NULL); 
          register_identifier($$->string); 
      }
number_reference: NUMBER { 
          $$ = construct_value_number(strtol(yytext,NULL, 10), NULL); 
      };
header_name: HEADER_CLASS { 
          $$ = construct_value_string(strdup(yytext), NULL); 
      };
io_keyword_reference: HEADER_IO_KEYWORD { 
          $$ = construct_value_string(strdup(yytext), NULL); 
      };
uniform_keyword_reference: HEADER_UNIFORM_KEYWORD { 
          $$ = construct_value_string(strdup(yytext), NULL); 
      };
;



opcode:

OpNop { 
              $$ = construct_value_opcode(0, 0, NULL); 
              add_opcode($$); 
              // printf("OpNop\n"); 
          }
|
OpUndef { 
              $$ = construct_value_opcode(1, 1, NULL); 
              add_opcode($$); 
              // printf("OpUndef\n"); 
          }
|
OpSourceContinued { 
              $$ = construct_value_opcode(2, 2, NULL); 
              add_opcode($$); 
              // printf("OpSourceContinued\n"); 
          }
|
OpSource { 
              $$ = construct_value_opcode(3, 3, NULL); 
              add_opcode($$); 
              // printf("OpSource\n"); 
          }
|
OpSourceExtension { 
              $$ = construct_value_opcode(4, 4, NULL); 
              add_opcode($$); 
              // printf("OpSourceExtension\n"); 
          }
|
OpName { 
              $$ = construct_value_opcode(5, 5, NULL); 
              add_opcode($$); 
              // printf("OpName\n"); 
          }
|
OpMemberName { 
              $$ = construct_value_opcode(6, 6, NULL); 
              add_opcode($$); 
              // printf("OpMemberName\n"); 
          }
|
OpString { 
              $$ = construct_value_opcode(7, 7, NULL); 
              add_opcode($$); 
              // printf("OpString\n"); 
          }
|
OpLine { 
              $$ = construct_value_opcode(8, 8, NULL); 
              add_opcode($$); 
              // printf("OpLine\n"); 
          }
|
OpNoLine { 
              $$ = construct_value_opcode(317, 9, NULL); 
              add_opcode($$); 
              // printf("OpNoLine\n"); 
          }
|
OpDecorate { 
              $$ = construct_value_opcode(71, 10, NULL); 
              add_opcode($$); 
              // printf("OpDecorate\n"); 
          }
|
OpMemberDecorate { 
              $$ = construct_value_opcode(72, 11, NULL); 
              add_opcode($$); 
              // printf("OpMemberDecorate\n"); 
          }
|
OpDecorationGroup { 
              $$ = construct_value_opcode(73, 12, NULL); 
              add_opcode($$); 
              // printf("OpDecorationGroup\n"); 
          }
|
OpGroupDecorate { 
              $$ = construct_value_opcode(74, 13, NULL); 
              add_opcode($$); 
              // printf("OpGroupDecorate\n"); 
          }
|
OpGroupMemberDecorate { 
              $$ = construct_value_opcode(75, 14, NULL); 
              add_opcode($$); 
              // printf("OpGroupMemberDecorate\n"); 
          }
|
OpExtension { 
              $$ = construct_value_opcode(10, 15, NULL); 
              add_opcode($$); 
              // printf("OpExtension\n"); 
          }
|
OpExtInstImport { 
              $$ = construct_value_opcode(11, 16, NULL); 
              add_opcode($$); 
              // printf("OpExtInstImport\n"); 
          }
|
OpExtInst { 
              $$ = construct_value_opcode(12, 17, NULL); 
              add_opcode($$); 
              // printf("OpExtInst\n"); 
          }
|
OpMemoryModel { 
              $$ = construct_value_opcode(14, 18, NULL); 
              add_opcode($$); 
              // printf("OpMemoryModel\n"); 
          }
|
OpEntryPoint { 
              $$ = construct_value_opcode(15, 19, NULL); 
              add_opcode($$); 
              // printf("OpEntryPoint\n"); 
          }
|
OpExecutionMode { 
              $$ = construct_value_opcode(16, 20, NULL); 
              add_opcode($$); 
              // printf("OpExecutionMode\n"); 
          }
|
OpCapability { 
              $$ = construct_value_opcode(17, 21, NULL); 
              add_opcode($$); 
              // printf("OpCapability\n"); 
          }
|
OpTypeVoid { 
              $$ = construct_value_opcode(19, 22, NULL); 
              add_opcode($$); 
              // printf("OpTypeVoid\n"); 
          }
|
OpTypeBool { 
              $$ = construct_value_opcode(20, 23, NULL); 
              add_opcode($$); 
              // printf("OpTypeBool\n"); 
          }
|
OpTypeInt { 
              $$ = construct_value_opcode(21, 24, NULL); 
              add_opcode($$); 
              // printf("OpTypeInt\n"); 
          }
|
OpTypeFloat { 
              $$ = construct_value_opcode(22, 25, NULL); 
              add_opcode($$); 
              // printf("OpTypeFloat\n"); 
          }
|
OpTypeVector { 
              $$ = construct_value_opcode(23, 26, NULL); 
              add_opcode($$); 
              // printf("OpTypeVector\n"); 
          }
|
OpTypeMatrix { 
              $$ = construct_value_opcode(24, 27, NULL); 
              add_opcode($$); 
              // printf("OpTypeMatrix\n"); 
          }
|
OpTypeSampler { 
              $$ = construct_value_opcode(26, 28, NULL); 
              add_opcode($$); 
              // printf("OpTypeSampler\n"); 
          }
|
OpTypeSampledImage { 
              $$ = construct_value_opcode(27, 29, NULL); 
              add_opcode($$); 
              // printf("OpTypeSampledImage\n"); 
          }
|
OpTypeArray { 
              $$ = construct_value_opcode(28, 30, NULL); 
              add_opcode($$); 
              // printf("OpTypeArray\n"); 
          }
|
OpTypeRuntimeArray { 
              $$ = construct_value_opcode(29, 31, NULL); 
              add_opcode($$); 
              // printf("OpTypeRuntimeArray\n"); 
          }
|
OpTypeStruct { 
              $$ = construct_value_opcode(30, 32, NULL); 
              add_opcode($$); 
              // printf("OpTypeStruct\n"); 
          }
|
OpTypeOpaque { 
              $$ = construct_value_opcode(31, 33, NULL); 
              add_opcode($$); 
              // printf("OpTypeOpaque\n"); 
          }
|
OpTypePointer { 
              $$ = construct_value_opcode(32, 34, NULL); 
              add_opcode($$); 
              // printf("OpTypePointer\n"); 
          }
|
OpTypeFunction { 
              $$ = construct_value_opcode(33, 35, NULL); 
              add_opcode($$); 
              // printf("OpTypeFunction\n"); 
          }
|
OpTypeEvent { 
              $$ = construct_value_opcode(34, 36, NULL); 
              add_opcode($$); 
              // printf("OpTypeEvent\n"); 
          }
|
OpTypeDeviceEvent { 
              $$ = construct_value_opcode(35, 37, NULL); 
              add_opcode($$); 
              // printf("OpTypeDeviceEvent\n"); 
          }
|
OpTypeReserveId { 
              $$ = construct_value_opcode(36, 38, NULL); 
              add_opcode($$); 
              // printf("OpTypeReserveId\n"); 
          }
|
OpTypeQueue { 
              $$ = construct_value_opcode(37, 39, NULL); 
              add_opcode($$); 
              // printf("OpTypeQueue\n"); 
          }
|
OpTypePipe { 
              $$ = construct_value_opcode(38, 40, NULL); 
              add_opcode($$); 
              // printf("OpTypePipe\n"); 
          }
|
OpTypeForwardPointer { 
              $$ = construct_value_opcode(39, 41, NULL); 
              add_opcode($$); 
              // printf("OpTypeForwardPointer\n"); 
          }
|
OpConstantTrue { 
              $$ = construct_value_opcode(41, 42, NULL); 
              add_opcode($$); 
              // printf("OpConstantTrue\n"); 
          }
|
OpConstantFalse { 
              $$ = construct_value_opcode(42, 43, NULL); 
              add_opcode($$); 
              // printf("OpConstantFalse\n"); 
          }
|
OpConstant { 
              $$ = construct_value_opcode(43, 44, NULL); 
              add_opcode($$); 
              // printf("OpConstant\n"); 
          }
|
OpConstantComposite { 
              $$ = construct_value_opcode(44, 45, NULL); 
              add_opcode($$); 
              // printf("OpConstantComposite\n"); 
          }
|
OpConstantSampler { 
              $$ = construct_value_opcode(45, 46, NULL); 
              add_opcode($$); 
              // printf("OpConstantSampler\n"); 
          }
|
OpConstantNull { 
              $$ = construct_value_opcode(46, 47, NULL); 
              add_opcode($$); 
              // printf("OpConstantNull\n"); 
          }
|
OpSpecConstantTrue { 
              $$ = construct_value_opcode(48, 48, NULL); 
              add_opcode($$); 
              // printf("OpSpecConstantTrue\n"); 
          }
|
OpSpecConstantFalse { 
              $$ = construct_value_opcode(49, 49, NULL); 
              add_opcode($$); 
              // printf("OpSpecConstantFalse\n"); 
          }
|
OpSpecConstant { 
              $$ = construct_value_opcode(50, 50, NULL); 
              add_opcode($$); 
              // printf("OpSpecConstant\n"); 
          }
|
OpSpecConstantComposite { 
              $$ = construct_value_opcode(51, 51, NULL); 
              add_opcode($$); 
              // printf("OpSpecConstantComposite\n"); 
          }
|
OpSpecConstantOp { 
              $$ = construct_value_opcode(52, 52, NULL); 
              add_opcode($$); 
              // printf("OpSpecConstantOp\n"); 
          }
|
OpVariable { 
              $$ = construct_value_opcode(59, 53, NULL); 
              add_opcode($$); 
              // printf("OpVariable\n"); 
          }
|
OpImageTexelPointer { 
              $$ = construct_value_opcode(60, 54, NULL); 
              add_opcode($$); 
              // printf("OpImageTexelPointer\n"); 
          }
|
OpLoad { 
              $$ = construct_value_opcode(61, 55, NULL); 
              add_opcode($$); 
              // printf("OpLoad\n"); 
          }
|
OpStore { 
              $$ = construct_value_opcode(62, 56, NULL); 
              add_opcode($$); 
              // printf("OpStore\n"); 
          }
|
OpCopyMemory { 
              $$ = construct_value_opcode(63, 57, NULL); 
              add_opcode($$); 
              // printf("OpCopyMemory\n"); 
          }
|
OpCopyMemorySized { 
              $$ = construct_value_opcode(64, 58, NULL); 
              add_opcode($$); 
              // printf("OpCopyMemorySized\n"); 
          }
|
OpAccessChain { 
              $$ = construct_value_opcode(65, 59, NULL); 
              add_opcode($$); 
              // printf("OpAccessChain\n"); 
          }
|
OpInBoundsAccessChain { 
              $$ = construct_value_opcode(66, 60, NULL); 
              add_opcode($$); 
              // printf("OpInBoundsAccessChain\n"); 
          }
|
OpPtrAccessChain { 
              $$ = construct_value_opcode(67, 61, NULL); 
              add_opcode($$); 
              // printf("OpPtrAccessChain\n"); 
          }
|
OpArrayLength { 
              $$ = construct_value_opcode(68, 62, NULL); 
              add_opcode($$); 
              // printf("OpArrayLength\n"); 
          }
|
OpGenericPtrMemSemantics { 
              $$ = construct_value_opcode(69, 63, NULL); 
              add_opcode($$); 
              // printf("OpGenericPtrMemSemantics\n"); 
          }
|
OpInBoundsPtrAccessChain { 
              $$ = construct_value_opcode(70, 64, NULL); 
              add_opcode($$); 
              // printf("OpInBoundsPtrAccessChain\n"); 
          }
|
OpFunction { 
              $$ = construct_value_opcode(54, 65, NULL); 
              add_opcode($$); 
              // printf("OpFunction\n"); 
          }
|
OpFunctionParameter { 
              $$ = construct_value_opcode(55, 66, NULL); 
              add_opcode($$); 
              // printf("OpFunctionParameter\n"); 
          }
|
OpFunctionEnd { 
              $$ = construct_value_opcode(56, 67, NULL); 
              add_opcode($$); 
              // printf("OpFunctionEnd\n"); 
          }
|
OpFunctionCall { 
              $$ = construct_value_opcode(57, 68, NULL); 
              add_opcode($$); 
              // printf("OpFunctionCall\n"); 
          }
|
OpSampledImage { 
              $$ = construct_value_opcode(86, 69, NULL); 
              add_opcode($$); 
              // printf("OpSampledImage\n"); 
          }
|
OpImageSampleImplicitLod { 
              $$ = construct_value_opcode(87, 70, NULL); 
              add_opcode($$); 
              // printf("OpImageSampleImplicitLod\n"); 
          }
|
OpImageSampleExplicitLod { 
              $$ = construct_value_opcode(88, 71, NULL); 
              add_opcode($$); 
              // printf("OpImageSampleExplicitLod\n"); 
          }
|
OpImageSampleDrefImplicitLod { 
              $$ = construct_value_opcode(89, 72, NULL); 
              add_opcode($$); 
              // printf("OpImageSampleDrefImplicitLod\n"); 
          }
|
OpImageSampleDrefExplicitLod { 
              $$ = construct_value_opcode(90, 73, NULL); 
              add_opcode($$); 
              // printf("OpImageSampleDrefExplicitLod\n"); 
          }
|
OpImageSampleProjImplicitLod { 
              $$ = construct_value_opcode(91, 74, NULL); 
              add_opcode($$); 
              // printf("OpImageSampleProjImplicitLod\n"); 
          }
|
OpImageSampleProjExplicitLod { 
              $$ = construct_value_opcode(92, 75, NULL); 
              add_opcode($$); 
              // printf("OpImageSampleProjExplicitLod\n"); 
          }
|
OpImageSampleProjDrefImplicitLod { 
              $$ = construct_value_opcode(93, 76, NULL); 
              add_opcode($$); 
              // printf("OpImageSampleProjDrefImplicitLod\n"); 
          }
|
OpImageSampleProjDrefExplicitLod { 
              $$ = construct_value_opcode(94, 77, NULL); 
              add_opcode($$); 
              // printf("OpImageSampleProjDrefExplicitLod\n"); 
          }
|
OpImageFetch { 
              $$ = construct_value_opcode(95, 78, NULL); 
              add_opcode($$); 
              // printf("OpImageFetch\n"); 
          }
|
OpImageGather { 
              $$ = construct_value_opcode(96, 79, NULL); 
              add_opcode($$); 
              // printf("OpImageGather\n"); 
          }
|
OpImageDrefGather { 
              $$ = construct_value_opcode(97, 80, NULL); 
              add_opcode($$); 
              // printf("OpImageDrefGather\n"); 
          }
|
OpImageRead { 
              $$ = construct_value_opcode(98, 81, NULL); 
              add_opcode($$); 
              // printf("OpImageRead\n"); 
          }
|
OpImageWrite { 
              $$ = construct_value_opcode(99, 82, NULL); 
              add_opcode($$); 
              // printf("OpImageWrite\n"); 
          }
|
OpImage { 
              $$ = construct_value_opcode(100, 83, NULL); 
              add_opcode($$); 
              // printf("OpImage\n"); 
          }
|
OpImageQueryFormat { 
              $$ = construct_value_opcode(101, 84, NULL); 
              add_opcode($$); 
              // printf("OpImageQueryFormat\n"); 
          }
|
OpImageQueryOrder { 
              $$ = construct_value_opcode(102, 85, NULL); 
              add_opcode($$); 
              // printf("OpImageQueryOrder\n"); 
          }
|
OpImageQuerySizeLod { 
              $$ = construct_value_opcode(103, 86, NULL); 
              add_opcode($$); 
              // printf("OpImageQuerySizeLod\n"); 
          }
|
OpImageQuerySize { 
              $$ = construct_value_opcode(104, 87, NULL); 
              add_opcode($$); 
              // printf("OpImageQuerySize\n"); 
          }
|
OpImageQueryLod { 
              $$ = construct_value_opcode(105, 88, NULL); 
              add_opcode($$); 
              // printf("OpImageQueryLod\n"); 
          }
|
OpImageQueryLevels { 
              $$ = construct_value_opcode(106, 89, NULL); 
              add_opcode($$); 
              // printf("OpImageQueryLevels\n"); 
          }
|
OpImageQuerySamples { 
              $$ = construct_value_opcode(107, 90, NULL); 
              add_opcode($$); 
              // printf("OpImageQuerySamples\n"); 
          }
|
OpImageSparseSampleImplicitLod { 
              $$ = construct_value_opcode(305, 91, NULL); 
              add_opcode($$); 
              // printf("OpImageSparseSampleImplicitLod\n"); 
          }
|
OpImageSparseSampleExplicitLod { 
              $$ = construct_value_opcode(306, 92, NULL); 
              add_opcode($$); 
              // printf("OpImageSparseSampleExplicitLod\n"); 
          }
|
OpImageSparseSampleDrefImplicitLod { 
              $$ = construct_value_opcode(307, 93, NULL); 
              add_opcode($$); 
              // printf("OpImageSparseSampleDrefImplicitLod\n"); 
          }
|
OpImageSparseSampleDrefExplicitLod { 
              $$ = construct_value_opcode(308, 94, NULL); 
              add_opcode($$); 
              // printf("OpImageSparseSampleDrefExplicitLod\n"); 
          }
|
OpImageSparseSampleProjImplicitLod { 
              $$ = construct_value_opcode(309, 95, NULL); 
              add_opcode($$); 
              // printf("OpImageSparseSampleProjImplicitLod\n"); 
          }
|
OpImageSparseSampleProjExplicitLod { 
              $$ = construct_value_opcode(310, 96, NULL); 
              add_opcode($$); 
              // printf("OpImageSparseSampleProjExplicitLod\n"); 
          }
|
OpImageSparseSampleProjDrefImplicitLod { 
              $$ = construct_value_opcode(311, 97, NULL); 
              add_opcode($$); 
              // printf("OpImageSparseSampleProjDrefImplicitLod\n"); 
          }
|
OpImageSparseSampleProjDrefExplicitLod { 
              $$ = construct_value_opcode(312, 98, NULL); 
              add_opcode($$); 
              // printf("OpImageSparseSampleProjDrefExplicitLod\n"); 
          }
|
OpImageSparseFetch { 
              $$ = construct_value_opcode(313, 99, NULL); 
              add_opcode($$); 
              // printf("OpImageSparseFetch\n"); 
          }
|
OpImageSparseGather { 
              $$ = construct_value_opcode(314, 100, NULL); 
              add_opcode($$); 
              // printf("OpImageSparseGather\n"); 
          }
|
OpImageSparseDrefGather { 
              $$ = construct_value_opcode(315, 101, NULL); 
              add_opcode($$); 
              // printf("OpImageSparseDrefGather\n"); 
          }
|
OpImageSparseTexelsResident { 
              $$ = construct_value_opcode(316, 102, NULL); 
              add_opcode($$); 
              // printf("OpImageSparseTexelsResident\n"); 
          }
|
OpImageSparseRead { 
              $$ = construct_value_opcode(320, 103, NULL); 
              add_opcode($$); 
              // printf("OpImageSparseRead\n"); 
          }
|
OpConvertFToU { 
              $$ = construct_value_opcode(109, 104, NULL); 
              add_opcode($$); 
              // printf("OpConvertFToU\n"); 
          }
|
OpConvertFToS { 
              $$ = construct_value_opcode(110, 105, NULL); 
              add_opcode($$); 
              // printf("OpConvertFToS\n"); 
          }
|
OpConvertSToF { 
              $$ = construct_value_opcode(111, 106, NULL); 
              add_opcode($$); 
              // printf("OpConvertSToF\n"); 
          }
|
OpConvertUToF { 
              $$ = construct_value_opcode(112, 107, NULL); 
              add_opcode($$); 
              // printf("OpConvertUToF\n"); 
          }
|
OpUConvert { 
              $$ = construct_value_opcode(113, 108, NULL); 
              add_opcode($$); 
              // printf("OpUConvert\n"); 
          }
|
OpSConvert { 
              $$ = construct_value_opcode(114, 109, NULL); 
              add_opcode($$); 
              // printf("OpSConvert\n"); 
          }
|
OpFConvert { 
              $$ = construct_value_opcode(115, 110, NULL); 
              add_opcode($$); 
              // printf("OpFConvert\n"); 
          }
|
OpQuantizeToF16 { 
              $$ = construct_value_opcode(116, 111, NULL); 
              add_opcode($$); 
              // printf("OpQuantizeToF16\n"); 
          }
|
OpConvertPtrToU { 
              $$ = construct_value_opcode(117, 112, NULL); 
              add_opcode($$); 
              // printf("OpConvertPtrToU\n"); 
          }
|
OpSatConvertSToU { 
              $$ = construct_value_opcode(118, 113, NULL); 
              add_opcode($$); 
              // printf("OpSatConvertSToU\n"); 
          }
|
OpSatConvertUToS { 
              $$ = construct_value_opcode(119, 114, NULL); 
              add_opcode($$); 
              // printf("OpSatConvertUToS\n"); 
          }
|
OpConvertUToPtr { 
              $$ = construct_value_opcode(120, 115, NULL); 
              add_opcode($$); 
              // printf("OpConvertUToPtr\n"); 
          }
|
OpPtrCastToGeneric { 
              $$ = construct_value_opcode(121, 116, NULL); 
              add_opcode($$); 
              // printf("OpPtrCastToGeneric\n"); 
          }
|
OpGenericCastToPtr { 
              $$ = construct_value_opcode(122, 117, NULL); 
              add_opcode($$); 
              // printf("OpGenericCastToPtr\n"); 
          }
|
OpGenericCastToPtrExplicit { 
              $$ = construct_value_opcode(123, 118, NULL); 
              add_opcode($$); 
              // printf("OpGenericCastToPtrExplicit\n"); 
          }
|
OpBitcast { 
              $$ = construct_value_opcode(124, 119, NULL); 
              add_opcode($$); 
              // printf("OpBitcast\n"); 
          }
|
OpVectorExtractDynamic { 
              $$ = construct_value_opcode(77, 120, NULL); 
              add_opcode($$); 
              // printf("OpVectorExtractDynamic\n"); 
          }
|
OpVectorInsertDynamic { 
              $$ = construct_value_opcode(78, 121, NULL); 
              add_opcode($$); 
              // printf("OpVectorInsertDynamic\n"); 
          }
|
OpVectorShuffle { 
              $$ = construct_value_opcode(79, 122, NULL); 
              add_opcode($$); 
              // printf("OpVectorShuffle\n"); 
          }
|
OpCompositeConstruct { 
              $$ = construct_value_opcode(80, 123, NULL); 
              add_opcode($$); 
              // printf("OpCompositeConstruct\n"); 
          }
|
OpCompositeExtract { 
              $$ = construct_value_opcode(81, 124, NULL); 
              add_opcode($$); 
              // printf("OpCompositeExtract\n"); 
          }
|
OpCompositeInsert { 
              $$ = construct_value_opcode(82, 125, NULL); 
              add_opcode($$); 
              // printf("OpCompositeInsert\n"); 
          }
|
OpCopyObject { 
              $$ = construct_value_opcode(83, 126, NULL); 
              add_opcode($$); 
              // printf("OpCopyObject\n"); 
          }
|
OpTranspose { 
              $$ = construct_value_opcode(84, 127, NULL); 
              add_opcode($$); 
              // printf("OpTranspose\n"); 
          }
|
OpSNegate { 
              $$ = construct_value_opcode(126, 128, NULL); 
              add_opcode($$); 
              // printf("OpSNegate\n"); 
          }
|
OpFNegate { 
              $$ = construct_value_opcode(127, 129, NULL); 
              add_opcode($$); 
              // printf("OpFNegate\n"); 
          }
|
OpIAdd { 
              $$ = construct_value_opcode(128, 130, NULL); 
              add_opcode($$); 
              // printf("OpIAdd\n"); 
          }
|
OpFAdd { 
              $$ = construct_value_opcode(129, 131, NULL); 
              add_opcode($$); 
              // printf("OpFAdd\n"); 
          }
|
OpISub { 
              $$ = construct_value_opcode(130, 132, NULL); 
              add_opcode($$); 
              // printf("OpISub\n"); 
          }
|
OpFSub { 
              $$ = construct_value_opcode(131, 133, NULL); 
              add_opcode($$); 
              // printf("OpFSub\n"); 
          }
|
OpIMul { 
              $$ = construct_value_opcode(132, 134, NULL); 
              add_opcode($$); 
              // printf("OpIMul\n"); 
          }
|
OpFMul { 
              $$ = construct_value_opcode(133, 135, NULL); 
              add_opcode($$); 
              // printf("OpFMul\n"); 
          }
|
OpUDiv { 
              $$ = construct_value_opcode(134, 136, NULL); 
              add_opcode($$); 
              // printf("OpUDiv\n"); 
          }
|
OpSDiv { 
              $$ = construct_value_opcode(135, 137, NULL); 
              add_opcode($$); 
              // printf("OpSDiv\n"); 
          }
|
OpFDiv { 
              $$ = construct_value_opcode(136, 138, NULL); 
              add_opcode($$); 
              // printf("OpFDiv\n"); 
          }
|
OpUMod { 
              $$ = construct_value_opcode(137, 139, NULL); 
              add_opcode($$); 
              // printf("OpUMod\n"); 
          }
|
OpSRem { 
              $$ = construct_value_opcode(138, 140, NULL); 
              add_opcode($$); 
              // printf("OpSRem\n"); 
          }
|
OpSMod { 
              $$ = construct_value_opcode(139, 141, NULL); 
              add_opcode($$); 
              // printf("OpSMod\n"); 
          }
|
OpFRem { 
              $$ = construct_value_opcode(140, 142, NULL); 
              add_opcode($$); 
              // printf("OpFRem\n"); 
          }
|
OpFMod { 
              $$ = construct_value_opcode(141, 143, NULL); 
              add_opcode($$); 
              // printf("OpFMod\n"); 
          }
|
OpVectorTimesScalar { 
              $$ = construct_value_opcode(142, 144, NULL); 
              add_opcode($$); 
              // printf("OpVectorTimesScalar\n"); 
          }
|
OpMatrixTimesScalar { 
              $$ = construct_value_opcode(143, 145, NULL); 
              add_opcode($$); 
              // printf("OpMatrixTimesScalar\n"); 
          }
|
OpVectorTimesMatrix { 
              $$ = construct_value_opcode(144, 146, NULL); 
              add_opcode($$); 
              // printf("OpVectorTimesMatrix\n"); 
          }
|
OpMatrixTimesVector { 
              $$ = construct_value_opcode(145, 147, NULL); 
              add_opcode($$); 
              // printf("OpMatrixTimesVector\n"); 
          }
|
OpMatrixTimesMatrix { 
              $$ = construct_value_opcode(146, 148, NULL); 
              add_opcode($$); 
              // printf("OpMatrixTimesMatrix\n"); 
          }
|
OpOuterProduct { 
              $$ = construct_value_opcode(147, 149, NULL); 
              add_opcode($$); 
              // printf("OpOuterProduct\n"); 
          }
|
OpDot { 
              $$ = construct_value_opcode(148, 150, NULL); 
              add_opcode($$); 
              // printf("OpDot\n"); 
          }
|
OpIAddCarry { 
              $$ = construct_value_opcode(149, 151, NULL); 
              add_opcode($$); 
              // printf("OpIAddCarry\n"); 
          }
|
OpISubBorrow { 
              $$ = construct_value_opcode(150, 152, NULL); 
              add_opcode($$); 
              // printf("OpISubBorrow\n"); 
          }
|
OpUMulExtended { 
              $$ = construct_value_opcode(151, 153, NULL); 
              add_opcode($$); 
              // printf("OpUMulExtended\n"); 
          }
|
OpSMulExtended { 
              $$ = construct_value_opcode(152, 154, NULL); 
              add_opcode($$); 
              // printf("OpSMulExtended\n"); 
          }
|
OpShiftRightLogical { 
              $$ = construct_value_opcode(194, 155, NULL); 
              add_opcode($$); 
              // printf("OpShiftRightLogical\n"); 
          }
|
OpShiftRightArithmetic { 
              $$ = construct_value_opcode(195, 156, NULL); 
              add_opcode($$); 
              // printf("OpShiftRightArithmetic\n"); 
          }
|
OpShiftLeftLogical { 
              $$ = construct_value_opcode(196, 157, NULL); 
              add_opcode($$); 
              // printf("OpShiftLeftLogical\n"); 
          }
|
OpBitwiseOr { 
              $$ = construct_value_opcode(197, 158, NULL); 
              add_opcode($$); 
              // printf("OpBitwiseOr\n"); 
          }
|
OpBitwiseXor { 
              $$ = construct_value_opcode(198, 159, NULL); 
              add_opcode($$); 
              // printf("OpBitwiseXor\n"); 
          }
|
OpBitwiseAnd { 
              $$ = construct_value_opcode(199, 160, NULL); 
              add_opcode($$); 
              // printf("OpBitwiseAnd\n"); 
          }
|
OpNot { 
              $$ = construct_value_opcode(200, 161, NULL); 
              add_opcode($$); 
              // printf("OpNot\n"); 
          }
|
OpBitFieldInsert { 
              $$ = construct_value_opcode(201, 162, NULL); 
              add_opcode($$); 
              // printf("OpBitFieldInsert\n"); 
          }
|
OpBitFieldSExtract { 
              $$ = construct_value_opcode(202, 163, NULL); 
              add_opcode($$); 
              // printf("OpBitFieldSExtract\n"); 
          }
|
OpBitFieldUExtract { 
              $$ = construct_value_opcode(203, 164, NULL); 
              add_opcode($$); 
              // printf("OpBitFieldUExtract\n"); 
          }
|
OpBitReverse { 
              $$ = construct_value_opcode(204, 165, NULL); 
              add_opcode($$); 
              // printf("OpBitReverse\n"); 
          }
|
OpBitCount { 
              $$ = construct_value_opcode(205, 166, NULL); 
              add_opcode($$); 
              // printf("OpBitCount\n"); 
          }
|
OpAny { 
              $$ = construct_value_opcode(154, 167, NULL); 
              add_opcode($$); 
              // printf("OpAny\n"); 
          }
|
OpAll { 
              $$ = construct_value_opcode(155, 168, NULL); 
              add_opcode($$); 
              // printf("OpAll\n"); 
          }
|
OpIsNan { 
              $$ = construct_value_opcode(156, 169, NULL); 
              add_opcode($$); 
              // printf("OpIsNan\n"); 
          }
|
OpIsInf { 
              $$ = construct_value_opcode(157, 170, NULL); 
              add_opcode($$); 
              // printf("OpIsInf\n"); 
          }
|
OpIsFinite { 
              $$ = construct_value_opcode(158, 171, NULL); 
              add_opcode($$); 
              // printf("OpIsFinite\n"); 
          }
|
OpIsNormal { 
              $$ = construct_value_opcode(159, 172, NULL); 
              add_opcode($$); 
              // printf("OpIsNormal\n"); 
          }
|
OpSignBitSet { 
              $$ = construct_value_opcode(160, 173, NULL); 
              add_opcode($$); 
              // printf("OpSignBitSet\n"); 
          }
|
OpLessOrGreater { 
              $$ = construct_value_opcode(161, 174, NULL); 
              add_opcode($$); 
              // printf("OpLessOrGreater\n"); 
          }
|
OpOrdered { 
              $$ = construct_value_opcode(162, 175, NULL); 
              add_opcode($$); 
              // printf("OpOrdered\n"); 
          }
|
OpUnordered { 
              $$ = construct_value_opcode(163, 176, NULL); 
              add_opcode($$); 
              // printf("OpUnordered\n"); 
          }
|
OpLogicalEqual { 
              $$ = construct_value_opcode(164, 177, NULL); 
              add_opcode($$); 
              // printf("OpLogicalEqual\n"); 
          }
|
OpLogicalNotEqual { 
              $$ = construct_value_opcode(165, 178, NULL); 
              add_opcode($$); 
              // printf("OpLogicalNotEqual\n"); 
          }
|
OpLogicalOr { 
              $$ = construct_value_opcode(166, 179, NULL); 
              add_opcode($$); 
              // printf("OpLogicalOr\n"); 
          }
|
OpLogicalAnd { 
              $$ = construct_value_opcode(167, 180, NULL); 
              add_opcode($$); 
              // printf("OpLogicalAnd\n"); 
          }
|
OpLogicalNot { 
              $$ = construct_value_opcode(168, 181, NULL); 
              add_opcode($$); 
              // printf("OpLogicalNot\n"); 
          }
|
OpSelect { 
              $$ = construct_value_opcode(169, 182, NULL); 
              add_opcode($$); 
              // printf("OpSelect\n"); 
          }
|
OpIEqual { 
              $$ = construct_value_opcode(170, 183, NULL); 
              add_opcode($$); 
              // printf("OpIEqual\n"); 
          }
|
OpINotEqual { 
              $$ = construct_value_opcode(171, 184, NULL); 
              add_opcode($$); 
              // printf("OpINotEqual\n"); 
          }
|
OpUGreaterThan { 
              $$ = construct_value_opcode(172, 185, NULL); 
              add_opcode($$); 
              // printf("OpUGreaterThan\n"); 
          }
|
OpSGreaterThan { 
              $$ = construct_value_opcode(173, 186, NULL); 
              add_opcode($$); 
              // printf("OpSGreaterThan\n"); 
          }
|
OpUGreaterThanEqual { 
              $$ = construct_value_opcode(174, 187, NULL); 
              add_opcode($$); 
              // printf("OpUGreaterThanEqual\n"); 
          }
|
OpSGreaterThanEqual { 
              $$ = construct_value_opcode(175, 188, NULL); 
              add_opcode($$); 
              // printf("OpSGreaterThanEqual\n"); 
          }
|
OpULessThan { 
              $$ = construct_value_opcode(176, 189, NULL); 
              add_opcode($$); 
              // printf("OpULessThan\n"); 
          }
|
OpSLessThan { 
              $$ = construct_value_opcode(177, 190, NULL); 
              add_opcode($$); 
              // printf("OpSLessThan\n"); 
          }
|
OpULessThanEqual { 
              $$ = construct_value_opcode(178, 191, NULL); 
              add_opcode($$); 
              // printf("OpULessThanEqual\n"); 
          }
|
OpSLessThanEqual { 
              $$ = construct_value_opcode(179, 192, NULL); 
              add_opcode($$); 
              // printf("OpSLessThanEqual\n"); 
          }
|
OpFOrdEqual { 
              $$ = construct_value_opcode(180, 193, NULL); 
              add_opcode($$); 
              // printf("OpFOrdEqual\n"); 
          }
|
OpFUnordEqual { 
              $$ = construct_value_opcode(181, 194, NULL); 
              add_opcode($$); 
              // printf("OpFUnordEqual\n"); 
          }
|
OpFOrdNotEqual { 
              $$ = construct_value_opcode(182, 195, NULL); 
              add_opcode($$); 
              // printf("OpFOrdNotEqual\n"); 
          }
|
OpFUnordNotEqual { 
              $$ = construct_value_opcode(183, 196, NULL); 
              add_opcode($$); 
              // printf("OpFUnordNotEqual\n"); 
          }
|
OpFOrdLessThan { 
              $$ = construct_value_opcode(184, 197, NULL); 
              add_opcode($$); 
              // printf("OpFOrdLessThan\n"); 
          }
|
OpFUnordLessThan { 
              $$ = construct_value_opcode(185, 198, NULL); 
              add_opcode($$); 
              // printf("OpFUnordLessThan\n"); 
          }
|
OpFOrdGreaterThan { 
              $$ = construct_value_opcode(186, 199, NULL); 
              add_opcode($$); 
              // printf("OpFOrdGreaterThan\n"); 
          }
|
OpFUnordGreaterThan { 
              $$ = construct_value_opcode(187, 200, NULL); 
              add_opcode($$); 
              // printf("OpFUnordGreaterThan\n"); 
          }
|
OpFOrdLessThanEqual { 
              $$ = construct_value_opcode(188, 201, NULL); 
              add_opcode($$); 
              // printf("OpFOrdLessThanEqual\n"); 
          }
|
OpFUnordLessThanEqual { 
              $$ = construct_value_opcode(189, 202, NULL); 
              add_opcode($$); 
              // printf("OpFUnordLessThanEqual\n"); 
          }
|
OpFOrdGreaterThanEqual { 
              $$ = construct_value_opcode(190, 203, NULL); 
              add_opcode($$); 
              // printf("OpFOrdGreaterThanEqual\n"); 
          }
|
OpFUnordGreaterThanEqual { 
              $$ = construct_value_opcode(191, 204, NULL); 
              add_opcode($$); 
              // printf("OpFUnordGreaterThanEqual\n"); 
          }
|
OpDPdx { 
              $$ = construct_value_opcode(207, 205, NULL); 
              add_opcode($$); 
              // printf("OpDPdx\n"); 
          }
|
OpDPdy { 
              $$ = construct_value_opcode(208, 206, NULL); 
              add_opcode($$); 
              // printf("OpDPdy\n"); 
          }
|
OpFwidth { 
              $$ = construct_value_opcode(209, 207, NULL); 
              add_opcode($$); 
              // printf("OpFwidth\n"); 
          }
|
OpDPdxFine { 
              $$ = construct_value_opcode(210, 208, NULL); 
              add_opcode($$); 
              // printf("OpDPdxFine\n"); 
          }
|
OpDPdyFine { 
              $$ = construct_value_opcode(211, 209, NULL); 
              add_opcode($$); 
              // printf("OpDPdyFine\n"); 
          }
|
OpFwidthFine { 
              $$ = construct_value_opcode(212, 210, NULL); 
              add_opcode($$); 
              // printf("OpFwidthFine\n"); 
          }
|
OpDPdxCoarse { 
              $$ = construct_value_opcode(213, 211, NULL); 
              add_opcode($$); 
              // printf("OpDPdxCoarse\n"); 
          }
|
OpDPdyCoarse { 
              $$ = construct_value_opcode(214, 212, NULL); 
              add_opcode($$); 
              // printf("OpDPdyCoarse\n"); 
          }
|
OpFwidthCoarse { 
              $$ = construct_value_opcode(215, 213, NULL); 
              add_opcode($$); 
              // printf("OpFwidthCoarse\n"); 
          }
|
OpPhi { 
              $$ = construct_value_opcode(245, 214, NULL); 
              add_opcode($$); 
              // printf("OpPhi\n"); 
          }
|
OpLoopMerge { 
              $$ = construct_value_opcode(246, 215, NULL); 
              add_opcode($$); 
              // printf("OpLoopMerge\n"); 
          }
|
OpSelectionMerge { 
              $$ = construct_value_opcode(247, 216, NULL); 
              add_opcode($$); 
              // printf("OpSelectionMerge\n"); 
          }
|
OpLabel { 
              $$ = construct_value_opcode(248, 217, NULL); 
              add_opcode($$); 
              // printf("OpLabel\n"); 
          }
|
OpBranch { 
              $$ = construct_value_opcode(249, 218, NULL); 
              add_opcode($$); 
              // printf("OpBranch\n"); 
          }
|
OpBranchConditional { 
              $$ = construct_value_opcode(250, 219, NULL); 
              add_opcode($$); 
              // printf("OpBranchConditional\n"); 
          }
|
OpSwitch { 
              $$ = construct_value_opcode(251, 220, NULL); 
              add_opcode($$); 
              // printf("OpSwitch\n"); 
          }
|
OpReturn { 
              $$ = construct_value_opcode(253, 221, NULL); 
              add_opcode($$); 
              // printf("OpReturn\n"); 
          }
|
OpReturnValue { 
              $$ = construct_value_opcode(254, 222, NULL); 
              add_opcode($$); 
              // printf("OpReturnValue\n"); 
          }
|
OpUnreachable { 
              $$ = construct_value_opcode(255, 223, NULL); 
              add_opcode($$); 
              // printf("OpUnreachable\n"); 
          }
|
OpLifetimeStart { 
              $$ = construct_value_opcode(256, 224, NULL); 
              add_opcode($$); 
              // printf("OpLifetimeStart\n"); 
          }
|
OpLifetimeStop { 
              $$ = construct_value_opcode(257, 225, NULL); 
              add_opcode($$); 
              // printf("OpLifetimeStop\n"); 
          }
|
OpAtomicLoad { 
              $$ = construct_value_opcode(227, 226, NULL); 
              add_opcode($$); 
              // printf("OpAtomicLoad\n"); 
          }
|
OpAtomicStore { 
              $$ = construct_value_opcode(228, 227, NULL); 
              add_opcode($$); 
              // printf("OpAtomicStore\n"); 
          }
|
OpAtomicExchange { 
              $$ = construct_value_opcode(229, 228, NULL); 
              add_opcode($$); 
              // printf("OpAtomicExchange\n"); 
          }
|
OpAtomicCompareExchangeWeak { 
              $$ = construct_value_opcode(231, 229, NULL); 
              add_opcode($$); 
              // printf("OpAtomicCompareExchangeWeak\n"); 
          }
|
OpAtomicIIncrement { 
              $$ = construct_value_opcode(232, 230, NULL); 
              add_opcode($$); 
              // printf("OpAtomicIIncrement\n"); 
          }
|
OpAtomicIDecrement { 
              $$ = construct_value_opcode(233, 231, NULL); 
              add_opcode($$); 
              // printf("OpAtomicIDecrement\n"); 
          }
|
OpAtomicIAdd { 
              $$ = construct_value_opcode(234, 232, NULL); 
              add_opcode($$); 
              // printf("OpAtomicIAdd\n"); 
          }
|
OpAtomicISub { 
              $$ = construct_value_opcode(235, 233, NULL); 
              add_opcode($$); 
              // printf("OpAtomicISub\n"); 
          }
|
OpAtomicSMin { 
              $$ = construct_value_opcode(236, 234, NULL); 
              add_opcode($$); 
              // printf("OpAtomicSMin\n"); 
          }
|
OpAtomicUMin { 
              $$ = construct_value_opcode(237, 235, NULL); 
              add_opcode($$); 
              // printf("OpAtomicUMin\n"); 
          }
|
OpAtomicSMax { 
              $$ = construct_value_opcode(238, 236, NULL); 
              add_opcode($$); 
              // printf("OpAtomicSMax\n"); 
          }
|
OpAtomicUMax { 
              $$ = construct_value_opcode(239, 237, NULL); 
              add_opcode($$); 
              // printf("OpAtomicUMax\n"); 
          }
|
OpAtomicAnd { 
              $$ = construct_value_opcode(240, 238, NULL); 
              add_opcode($$); 
              // printf("OpAtomicAnd\n"); 
          }
|
OpAtomicOr { 
              $$ = construct_value_opcode(241, 239, NULL); 
              add_opcode($$); 
              // printf("OpAtomicOr\n"); 
          }
|
OpAtomicXor { 
              $$ = construct_value_opcode(242, 240, NULL); 
              add_opcode($$); 
              // printf("OpAtomicXor\n"); 
          }
|
OpAtomicFlagTestAndSet { 
              $$ = construct_value_opcode(318, 241, NULL); 
              add_opcode($$); 
              // printf("OpAtomicFlagTestAndSet\n"); 
          }
|
OpAtomicFlagClear { 
              $$ = construct_value_opcode(319, 242, NULL); 
              add_opcode($$); 
              // printf("OpAtomicFlagClear\n"); 
          }
|
OpEmitStreamVertex { 
              $$ = construct_value_opcode(220, 243, NULL); 
              add_opcode($$); 
              // printf("OpEmitStreamVertex\n"); 
          }
|
OpEndStreamPrimitive { 
              $$ = construct_value_opcode(221, 244, NULL); 
              add_opcode($$); 
              // printf("OpEndStreamPrimitive\n"); 
          }
|
OpControlBarrier { 
              $$ = construct_value_opcode(224, 245, NULL); 
              add_opcode($$); 
              // printf("OpControlBarrier\n"); 
          }
|
OpMemoryBarrier { 
              $$ = construct_value_opcode(225, 246, NULL); 
              add_opcode($$); 
              // printf("OpMemoryBarrier\n"); 
          }
|
OpGroupAsyncCopy { 
              $$ = construct_value_opcode(259, 247, NULL); 
              add_opcode($$); 
              // printf("OpGroupAsyncCopy\n"); 
          }
|
OpGroupWaitEvents { 
              $$ = construct_value_opcode(260, 248, NULL); 
              add_opcode($$); 
              // printf("OpGroupWaitEvents\n"); 
          }
|
OpGroupAll { 
              $$ = construct_value_opcode(261, 249, NULL); 
              add_opcode($$); 
              // printf("OpGroupAll\n"); 
          }
|
OpGroupAny { 
              $$ = construct_value_opcode(262, 250, NULL); 
              add_opcode($$); 
              // printf("OpGroupAny\n"); 
          }
|
OpGroupBroadcast { 
              $$ = construct_value_opcode(263, 251, NULL); 
              add_opcode($$); 
              // printf("OpGroupBroadcast\n"); 
          }
|
OpGroupIAdd { 
              $$ = construct_value_opcode(264, 252, NULL); 
              add_opcode($$); 
              // printf("OpGroupIAdd\n"); 
          }
|
OpGroupFAdd { 
              $$ = construct_value_opcode(265, 253, NULL); 
              add_opcode($$); 
              // printf("OpGroupFAdd\n"); 
          }
|
OpGroupFMin { 
              $$ = construct_value_opcode(266, 254, NULL); 
              add_opcode($$); 
              // printf("OpGroupFMin\n"); 
          }
|
OpGroupUMin { 
              $$ = construct_value_opcode(267, 255, NULL); 
              add_opcode($$); 
              // printf("OpGroupUMin\n"); 
          }
|
OpGroupSMin { 
              $$ = construct_value_opcode(268, 256, NULL); 
              add_opcode($$); 
              // printf("OpGroupSMin\n"); 
          }
|
OpGroupFMax { 
              $$ = construct_value_opcode(269, 257, NULL); 
              add_opcode($$); 
              // printf("OpGroupFMax\n"); 
          }
|
OpGroupUMax { 
              $$ = construct_value_opcode(270, 258, NULL); 
              add_opcode($$); 
              // printf("OpGroupUMax\n"); 
          }
|
OpGroupSMax { 
              $$ = construct_value_opcode(271, 259, NULL); 
              add_opcode($$); 
              // printf("OpGroupSMax\n"); 
          }
|
OpSubgroupBallotKHR { 
              $$ = construct_value_opcode(4421, 260, NULL); 
              add_opcode($$); 
              // printf("OpSubgroupBallotKHR\n"); 
          }
|
OpSubgroupFirstInvocationKHR { 
              $$ = construct_value_opcode(4422, 261, NULL); 
              add_opcode($$); 
              // printf("OpSubgroupFirstInvocationKHR\n"); 
          }
|
OpSubgroupReadInvocationKHR { 
              $$ = construct_value_opcode(4432, 262, NULL); 
              add_opcode($$); 
              // printf("OpSubgroupReadInvocationKHR\n"); 
          }
|
OpGroupIAddNonUniformAMD { 
              $$ = construct_value_opcode(5000, 263, NULL); 
              add_opcode($$); 
              // printf("OpGroupIAddNonUniformAMD\n"); 
          }
|
OpGroupFAddNonUniformAMD { 
              $$ = construct_value_opcode(5001, 264, NULL); 
              add_opcode($$); 
              // printf("OpGroupFAddNonUniformAMD\n"); 
          }
|
OpGroupFMinNonUniformAMD { 
              $$ = construct_value_opcode(5002, 265, NULL); 
              add_opcode($$); 
              // printf("OpGroupFMinNonUniformAMD\n"); 
          }
|
OpGroupUMinNonUniformAMD { 
              $$ = construct_value_opcode(5003, 266, NULL); 
              add_opcode($$); 
              // printf("OpGroupUMinNonUniformAMD\n"); 
          }
|
OpGroupSMinNonUniformAMD { 
              $$ = construct_value_opcode(5004, 267, NULL); 
              add_opcode($$); 
              // printf("OpGroupSMinNonUniformAMD\n"); 
          }
|
OpGroupFMaxNonUniformAMD { 
              $$ = construct_value_opcode(5005, 268, NULL); 
              add_opcode($$); 
              // printf("OpGroupFMaxNonUniformAMD\n"); 
          }
|
OpGroupUMaxNonUniformAMD { 
              $$ = construct_value_opcode(5006, 269, NULL); 
              add_opcode($$); 
              // printf("OpGroupUMaxNonUniformAMD\n"); 
          }
|
OpGroupSMaxNonUniformAMD { 
              $$ = construct_value_opcode(5007, 270, NULL); 
              add_opcode($$); 
              // printf("OpGroupSMaxNonUniformAMD\n"); 
          }
|
OpEnqueueMarker { 
              $$ = construct_value_opcode(291, 271, NULL); 
              add_opcode($$); 
              // printf("OpEnqueueMarker\n"); 
          }
|
OpGetKernelNDrangeSubGroupCount { 
              $$ = construct_value_opcode(293, 272, NULL); 
              add_opcode($$); 
              // printf("OpGetKernelNDrangeSubGroupCount\n"); 
          }
|
OpGetKernelNDrangeMaxSubGroupSize { 
              $$ = construct_value_opcode(294, 273, NULL); 
              add_opcode($$); 
              // printf("OpGetKernelNDrangeMaxSubGroupSize\n"); 
          }
|
OpGetKernelWorkGroupSize { 
              $$ = construct_value_opcode(295, 274, NULL); 
              add_opcode($$); 
              // printf("OpGetKernelWorkGroupSize\n"); 
          }
|
OpGetKernelPreferredWorkGroupSizeMultiple { 
              $$ = construct_value_opcode(296, 275, NULL); 
              add_opcode($$); 
              // printf("OpGetKernelPreferredWorkGroupSizeMultiple\n"); 
          }
|
OpRetainEvent { 
              $$ = construct_value_opcode(297, 276, NULL); 
              add_opcode($$); 
              // printf("OpRetainEvent\n"); 
          }
|
OpReleaseEvent { 
              $$ = construct_value_opcode(298, 277, NULL); 
              add_opcode($$); 
              // printf("OpReleaseEvent\n"); 
          }
|
OpCreateUserEvent { 
              $$ = construct_value_opcode(299, 278, NULL); 
              add_opcode($$); 
              // printf("OpCreateUserEvent\n"); 
          }
|
OpIsValidEvent { 
              $$ = construct_value_opcode(300, 279, NULL); 
              add_opcode($$); 
              // printf("OpIsValidEvent\n"); 
          }
|
OpSetUserEventStatus { 
              $$ = construct_value_opcode(301, 280, NULL); 
              add_opcode($$); 
              // printf("OpSetUserEventStatus\n"); 
          }
|
OpCaptureEventProfilingInfo { 
              $$ = construct_value_opcode(302, 281, NULL); 
              add_opcode($$); 
              // printf("OpCaptureEventProfilingInfo\n"); 
          }
|
OpGetDefaultQueue { 
              $$ = construct_value_opcode(303, 282, NULL); 
              add_opcode($$); 
              // printf("OpGetDefaultQueue\n"); 
          }
|
OpBuildNDRange { 
              $$ = construct_value_opcode(304, 283, NULL); 
              add_opcode($$); 
              // printf("OpBuildNDRange\n"); 
          }
|
OpReadPipe { 
              $$ = construct_value_opcode(274, 284, NULL); 
              add_opcode($$); 
              // printf("OpReadPipe\n"); 
          }
|
OpWritePipe { 
              $$ = construct_value_opcode(275, 285, NULL); 
              add_opcode($$); 
              // printf("OpWritePipe\n"); 
          }
|
OpReservedReadPipe { 
              $$ = construct_value_opcode(276, 286, NULL); 
              add_opcode($$); 
              // printf("OpReservedReadPipe\n"); 
          }
|
OpReservedWritePipe { 
              $$ = construct_value_opcode(277, 287, NULL); 
              add_opcode($$); 
              // printf("OpReservedWritePipe\n"); 
          }
|
OpReserveReadPipePackets { 
              $$ = construct_value_opcode(278, 288, NULL); 
              add_opcode($$); 
              // printf("OpReserveReadPipePackets\n"); 
          }
|
OpReserveWritePipePackets { 
              $$ = construct_value_opcode(279, 289, NULL); 
              add_opcode($$); 
              // printf("OpReserveWritePipePackets\n"); 
          }
|
OpCommitReadPipe { 
              $$ = construct_value_opcode(280, 290, NULL); 
              add_opcode($$); 
              // printf("OpCommitReadPipe\n"); 
          }
|
OpCommitWritePipe { 
              $$ = construct_value_opcode(281, 291, NULL); 
              add_opcode($$); 
              // printf("OpCommitWritePipe\n"); 
          }
|
OpIsValidReserveId { 
              $$ = construct_value_opcode(282, 292, NULL); 
              add_opcode($$); 
              // printf("OpIsValidReserveId\n"); 
          }
|
OpGetNumPipePackets { 
              $$ = construct_value_opcode(283, 293, NULL); 
              add_opcode($$); 
              // printf("OpGetNumPipePackets\n"); 
          }
|
OpGetMaxPipePackets { 
              $$ = construct_value_opcode(284, 294, NULL); 
              add_opcode($$); 
              // printf("OpGetMaxPipePackets\n"); 
          }
|
OpGroupReserveReadPipePackets { 
              $$ = construct_value_opcode(285, 295, NULL); 
              add_opcode($$); 
              // printf("OpGroupReserveReadPipePackets\n"); 
          }
|
OpGroupReserveWritePipePackets { 
              $$ = construct_value_opcode(286, 296, NULL); 
              add_opcode($$); 
              // printf("OpGroupReserveWritePipePackets\n"); 
          }
|
OpGroupCommitReadPipe { 
              $$ = construct_value_opcode(287, 297, NULL); 
              add_opcode($$); 
              // printf("OpGroupCommitReadPipe\n"); 
          }
|
OpGroupCommitWritePipe { 
              $$ = construct_value_opcode(288, 298, NULL); 
              add_opcode($$); 
              // printf("OpGroupCommitWritePipe\n"); 
          }
;

%%

int yyerror (const char *error) { 
          fprintf(stderr, "%s on line %d\n", error, yylineno); 
          exit(-1); 
      }
void register_identifier_definition(value_t* opcode){ 
          if (result_indices[opcode->operation_number] >= 0){
              value_t* v; 
              get_value_in_chain(&v, result_indices[opcode->operation_number], opcode); 
              v->type = VALUE_TYPE_IDENTIFIER_DEFINITION; 
              add_future_identifier_definition(v->string); 
          } 
      }
