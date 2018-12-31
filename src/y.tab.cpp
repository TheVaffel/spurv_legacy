
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"

	#include <stdio.h>
#include <spurv_compiler.h>
#define YYSTYPE value_t*

int result_indices[] = {-1,1,-1,-1,-1,-1,-1,0,-1,-1,-1,-1,0,-1,-1,-1,0,1,-1,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-1,-1,-1,1,1,1,1,1,1,1,1,-1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-1,-1,0,-1,-1,-1,-1,-1,-1,-1,-1,1,-1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-1,-1,-1,-1,-1,1,-1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-1,-1,1,1,-1,-1,1,1,1,1,1,1,1,1,-1,-1,1,1,1,1,1,-1,-1,};

void register_identifier_definition(value_t* opcode);



/* Line 189 of yacc.c  */
#line 85 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/y.tab.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NEWLINE = 258,
     MAYBE_NEWLINE = 259,
     IDENTIFIER = 260,
     NUMBER = 261,
     STRING = 262,
     EQUALS = 263,
     HEADER_KEYWORD = 264,
     HEADER_CLASS = 265,
     HEADER_IO_KEYWORD = 266,
     HEADER_UNIFORM_KEYWORD = 267,
     OpNop = 268,
     OpUndef = 269,
     OpSourceContinued = 270,
     OpSource = 271,
     OpSourceExtension = 272,
     OpName = 273,
     OpMemberName = 274,
     OpString = 275,
     OpLine = 276,
     OpNoLine = 277,
     OpDecorate = 278,
     OpMemberDecorate = 279,
     OpDecorationGroup = 280,
     OpGroupDecorate = 281,
     OpGroupMemberDecorate = 282,
     OpExtension = 283,
     OpExtInstImport = 284,
     OpExtInst = 285,
     OpMemoryModel = 286,
     OpEntryPoint = 287,
     OpExecutionMode = 288,
     OpCapability = 289,
     OpTypeVoid = 290,
     OpTypeBool = 291,
     OpTypeInt = 292,
     OpTypeFloat = 293,
     OpTypeVector = 294,
     OpTypeMatrix = 295,
     OpTypeSampler = 296,
     OpTypeSampledImage = 297,
     OpTypeArray = 298,
     OpTypeRuntimeArray = 299,
     OpTypeStruct = 300,
     OpTypeOpaque = 301,
     OpTypePointer = 302,
     OpTypeFunction = 303,
     OpTypeEvent = 304,
     OpTypeDeviceEvent = 305,
     OpTypeReserveId = 306,
     OpTypeQueue = 307,
     OpTypePipe = 308,
     OpTypeForwardPointer = 309,
     OpConstantTrue = 310,
     OpConstantFalse = 311,
     OpConstant = 312,
     OpConstantComposite = 313,
     OpConstantSampler = 314,
     OpConstantNull = 315,
     OpSpecConstantTrue = 316,
     OpSpecConstantFalse = 317,
     OpSpecConstant = 318,
     OpSpecConstantComposite = 319,
     OpSpecConstantOp = 320,
     OpVariable = 321,
     OpImageTexelPointer = 322,
     OpLoad = 323,
     OpStore = 324,
     OpCopyMemory = 325,
     OpCopyMemorySized = 326,
     OpAccessChain = 327,
     OpInBoundsAccessChain = 328,
     OpPtrAccessChain = 329,
     OpArrayLength = 330,
     OpGenericPtrMemSemantics = 331,
     OpInBoundsPtrAccessChain = 332,
     OpFunction = 333,
     OpFunctionParameter = 334,
     OpFunctionEnd = 335,
     OpFunctionCall = 336,
     OpSampledImage = 337,
     OpImageSampleImplicitLod = 338,
     OpImageSampleExplicitLod = 339,
     OpImageSampleDrefImplicitLod = 340,
     OpImageSampleDrefExplicitLod = 341,
     OpImageSampleProjImplicitLod = 342,
     OpImageSampleProjExplicitLod = 343,
     OpImageSampleProjDrefImplicitLod = 344,
     OpImageSampleProjDrefExplicitLod = 345,
     OpImageFetch = 346,
     OpImageGather = 347,
     OpImageDrefGather = 348,
     OpImageRead = 349,
     OpImageWrite = 350,
     OpImage = 351,
     OpImageQueryFormat = 352,
     OpImageQueryOrder = 353,
     OpImageQuerySizeLod = 354,
     OpImageQuerySize = 355,
     OpImageQueryLod = 356,
     OpImageQueryLevels = 357,
     OpImageQuerySamples = 358,
     OpImageSparseSampleImplicitLod = 359,
     OpImageSparseSampleExplicitLod = 360,
     OpImageSparseSampleDrefImplicitLod = 361,
     OpImageSparseSampleDrefExplicitLod = 362,
     OpImageSparseSampleProjImplicitLod = 363,
     OpImageSparseSampleProjExplicitLod = 364,
     OpImageSparseSampleProjDrefImplicitLod = 365,
     OpImageSparseSampleProjDrefExplicitLod = 366,
     OpImageSparseFetch = 367,
     OpImageSparseGather = 368,
     OpImageSparseDrefGather = 369,
     OpImageSparseTexelsResident = 370,
     OpImageSparseRead = 371,
     OpConvertFToU = 372,
     OpConvertFToS = 373,
     OpConvertSToF = 374,
     OpConvertUToF = 375,
     OpUConvert = 376,
     OpSConvert = 377,
     OpFConvert = 378,
     OpQuantizeToF16 = 379,
     OpConvertPtrToU = 380,
     OpSatConvertSToU = 381,
     OpSatConvertUToS = 382,
     OpConvertUToPtr = 383,
     OpPtrCastToGeneric = 384,
     OpGenericCastToPtr = 385,
     OpGenericCastToPtrExplicit = 386,
     OpBitcast = 387,
     OpVectorExtractDynamic = 388,
     OpVectorInsertDynamic = 389,
     OpVectorShuffle = 390,
     OpCompositeConstruct = 391,
     OpCompositeExtract = 392,
     OpCompositeInsert = 393,
     OpCopyObject = 394,
     OpTranspose = 395,
     OpSNegate = 396,
     OpFNegate = 397,
     OpIAdd = 398,
     OpFAdd = 399,
     OpISub = 400,
     OpFSub = 401,
     OpIMul = 402,
     OpFMul = 403,
     OpUDiv = 404,
     OpSDiv = 405,
     OpFDiv = 406,
     OpUMod = 407,
     OpSRem = 408,
     OpSMod = 409,
     OpFRem = 410,
     OpFMod = 411,
     OpVectorTimesScalar = 412,
     OpMatrixTimesScalar = 413,
     OpVectorTimesMatrix = 414,
     OpMatrixTimesVector = 415,
     OpMatrixTimesMatrix = 416,
     OpOuterProduct = 417,
     OpDot = 418,
     OpIAddCarry = 419,
     OpISubBorrow = 420,
     OpUMulExtended = 421,
     OpSMulExtended = 422,
     OpShiftRightLogical = 423,
     OpShiftRightArithmetic = 424,
     OpShiftLeftLogical = 425,
     OpBitwiseOr = 426,
     OpBitwiseXor = 427,
     OpBitwiseAnd = 428,
     OpNot = 429,
     OpBitFieldInsert = 430,
     OpBitFieldSExtract = 431,
     OpBitFieldUExtract = 432,
     OpBitReverse = 433,
     OpBitCount = 434,
     OpAny = 435,
     OpAll = 436,
     OpIsNan = 437,
     OpIsInf = 438,
     OpIsFinite = 439,
     OpIsNormal = 440,
     OpSignBitSet = 441,
     OpLessOrGreater = 442,
     OpOrdered = 443,
     OpUnordered = 444,
     OpLogicalEqual = 445,
     OpLogicalNotEqual = 446,
     OpLogicalOr = 447,
     OpLogicalAnd = 448,
     OpLogicalNot = 449,
     OpSelect = 450,
     OpIEqual = 451,
     OpINotEqual = 452,
     OpUGreaterThan = 453,
     OpSGreaterThan = 454,
     OpUGreaterThanEqual = 455,
     OpSGreaterThanEqual = 456,
     OpULessThan = 457,
     OpSLessThan = 458,
     OpULessThanEqual = 459,
     OpSLessThanEqual = 460,
     OpFOrdEqual = 461,
     OpFUnordEqual = 462,
     OpFOrdNotEqual = 463,
     OpFUnordNotEqual = 464,
     OpFOrdLessThan = 465,
     OpFUnordLessThan = 466,
     OpFOrdGreaterThan = 467,
     OpFUnordGreaterThan = 468,
     OpFOrdLessThanEqual = 469,
     OpFUnordLessThanEqual = 470,
     OpFOrdGreaterThanEqual = 471,
     OpFUnordGreaterThanEqual = 472,
     OpDPdx = 473,
     OpDPdy = 474,
     OpFwidth = 475,
     OpDPdxFine = 476,
     OpDPdyFine = 477,
     OpFwidthFine = 478,
     OpDPdxCoarse = 479,
     OpDPdyCoarse = 480,
     OpFwidthCoarse = 481,
     OpPhi = 482,
     OpLoopMerge = 483,
     OpSelectionMerge = 484,
     OpLabel = 485,
     OpBranch = 486,
     OpBranchConditional = 487,
     OpSwitch = 488,
     OpReturn = 489,
     OpReturnValue = 490,
     OpUnreachable = 491,
     OpLifetimeStart = 492,
     OpLifetimeStop = 493,
     OpAtomicLoad = 494,
     OpAtomicStore = 495,
     OpAtomicExchange = 496,
     OpAtomicCompareExchangeWeak = 497,
     OpAtomicIIncrement = 498,
     OpAtomicIDecrement = 499,
     OpAtomicIAdd = 500,
     OpAtomicISub = 501,
     OpAtomicSMin = 502,
     OpAtomicUMin = 503,
     OpAtomicSMax = 504,
     OpAtomicUMax = 505,
     OpAtomicAnd = 506,
     OpAtomicOr = 507,
     OpAtomicXor = 508,
     OpAtomicFlagTestAndSet = 509,
     OpAtomicFlagClear = 510,
     OpEmitStreamVertex = 511,
     OpEndStreamPrimitive = 512,
     OpControlBarrier = 513,
     OpMemoryBarrier = 514,
     OpGroupAsyncCopy = 515,
     OpGroupWaitEvents = 516,
     OpGroupAll = 517,
     OpGroupAny = 518,
     OpGroupBroadcast = 519,
     OpGroupIAdd = 520,
     OpGroupFAdd = 521,
     OpGroupFMin = 522,
     OpGroupUMin = 523,
     OpGroupSMin = 524,
     OpGroupFMax = 525,
     OpGroupUMax = 526,
     OpGroupSMax = 527,
     OpSubgroupBallotKHR = 528,
     OpSubgroupFirstInvocationKHR = 529,
     OpSubgroupReadInvocationKHR = 530,
     OpGroupIAddNonUniformAMD = 531,
     OpGroupFAddNonUniformAMD = 532,
     OpGroupFMinNonUniformAMD = 533,
     OpGroupUMinNonUniformAMD = 534,
     OpGroupSMinNonUniformAMD = 535,
     OpGroupFMaxNonUniformAMD = 536,
     OpGroupUMaxNonUniformAMD = 537,
     OpGroupSMaxNonUniformAMD = 538,
     OpEnqueueMarker = 539,
     OpGetKernelNDrangeSubGroupCount = 540,
     OpGetKernelNDrangeMaxSubGroupSize = 541,
     OpGetKernelWorkGroupSize = 542,
     OpGetKernelPreferredWorkGroupSizeMultiple = 543,
     OpRetainEvent = 544,
     OpReleaseEvent = 545,
     OpCreateUserEvent = 546,
     OpIsValidEvent = 547,
     OpSetUserEventStatus = 548,
     OpCaptureEventProfilingInfo = 549,
     OpGetDefaultQueue = 550,
     OpBuildNDRange = 551,
     OpReadPipe = 552,
     OpWritePipe = 553,
     OpReservedReadPipe = 554,
     OpReservedWritePipe = 555,
     OpReserveReadPipePackets = 556,
     OpReserveWritePipePackets = 557,
     OpCommitReadPipe = 558,
     OpCommitWritePipe = 559,
     OpIsValidReserveId = 560,
     OpGetNumPipePackets = 561,
     OpGetMaxPipePackets = 562,
     OpGroupReserveReadPipePackets = 563,
     OpGroupReserveWritePipePackets = 564,
     OpGroupCommitReadPipe = 565,
     OpGroupCommitWritePipe = 566,
     E_Unknown = 567,
     E_ESSL = 568,
     E_GLSL = 569,
     E_OpenCL_C = 570,
     E_OpenCL_CPP = 571,
     E_HLSL = 572,
     E_Vertex = 573,
     E_TessellationControl = 574,
     E_TessellationEvaluation = 575,
     E_Geometry = 576,
     E_Fragment = 577,
     E_GLCompute = 578,
     E_Kernel = 579,
     E_Logical = 580,
     E_Physical32 = 581,
     E_Physical64 = 582,
     E_Simple = 583,
     E_GLSL450 = 584,
     E_OpenCL = 585,
     E_Invocations = 586,
     E_SpacingEqual = 587,
     E_SpacingFractionalEven = 588,
     E_SpacingFractionalOdd = 589,
     E_VertexOrderCw = 590,
     E_VertexOrderCcw = 591,
     E_PixelCenterInteger = 592,
     E_OriginUpperLeft = 593,
     E_OriginLowerLeft = 594,
     E_EarlyFragmentTests = 595,
     E_PointMode = 596,
     E_Xfb = 597,
     E_DepthReplacing = 598,
     E_DepthGreater = 599,
     E_DepthLess = 600,
     E_DepthUnchanged = 601,
     E_LocalSize = 602,
     E_LocalSizeHint = 603,
     E_InputPoints = 604,
     E_InputLines = 605,
     E_InputLinesAdjacency = 606,
     E_Triangles = 607,
     E_InputTrianglesAdjacency = 608,
     E_Quads = 609,
     E_Isolines = 610,
     E_OutputVertices = 611,
     E_OutputPoints = 612,
     E_OutputLineStrip = 613,
     E_OutputTriangleStrip = 614,
     E_VecTypeHint = 615,
     E_ContractionOff = 616,
     E_Initializer = 617,
     E_Finalizer = 618,
     E_SubgroupSize = 619,
     E_SubgroupsPerWorkgroup = 620,
     E_SubgroupsPerWorkgroupId = 621,
     E_LocalSizeId = 622,
     E_LocalSizeHintId = 623,
     E_PostDepthCoverage = 624,
     E_StencilRefReplacingEXT = 625,
     E_UniformConstant = 626,
     E_Input = 627,
     E_Uniform = 628,
     E_Output = 629,
     E_Workgroup = 630,
     E_CrossWorkgroup = 631,
     E_Private = 632,
     E_Function = 633,
     E_Generic = 634,
     E_PushConstant = 635,
     E_AtomicCounter = 636,
     E_Image = 637,
     E_StorageBuffer = 638,
     E_1D = 639,
     E_2D = 640,
     E_3D = 641,
     E_Cube = 642,
     E_Rect = 643,
     E_Buffer = 644,
     E_SubpassData = 645,
     E_None = 646,
     E_ClampToEdge = 647,
     E_Clamp = 648,
     E_Repeat = 649,
     E_RepeatMirrored = 650,
     E_Nearest = 651,
     E_Linear = 652,
     E_Rgba32f = 653,
     E_Rgba16f = 654,
     E_R32f = 655,
     E_Rgba8 = 656,
     E_Rgba8Snorm = 657,
     E_Rg32f = 658,
     E_Rg16f = 659,
     E_R11fG11fB10f = 660,
     E_R16f = 661,
     E_Rgba16 = 662,
     E_Rgb10A2 = 663,
     E_Rg16 = 664,
     E_Rg8 = 665,
     E_R16 = 666,
     E_R8 = 667,
     E_Rgba16Snorm = 668,
     E_Rg16Snorm = 669,
     E_Rg8Snorm = 670,
     E_R16Snorm = 671,
     E_R8Snorm = 672,
     E_Rgba32i = 673,
     E_Rgba16i = 674,
     E_Rgba8i = 675,
     E_R32i = 676,
     E_Rg32i = 677,
     E_Rg16i = 678,
     E_Rg8i = 679,
     E_R16i = 680,
     E_R8i = 681,
     E_Rgba32ui = 682,
     E_Rgba16ui = 683,
     E_Rgba8ui = 684,
     E_R32ui = 685,
     E_Rgb10a2ui = 686,
     E_Rg32ui = 687,
     E_Rg16ui = 688,
     E_Rg8ui = 689,
     E_R16ui = 690,
     E_R8ui = 691,
     E_R = 692,
     E_A = 693,
     E_RG = 694,
     E_RA = 695,
     E_RGB = 696,
     E_RGBA = 697,
     E_BGRA = 698,
     E_ARGB = 699,
     E_Intensity = 700,
     E_Luminance = 701,
     E_Rx = 702,
     E_RGx = 703,
     E_RGBx = 704,
     E_Depth = 705,
     E_DepthStencil = 706,
     E_sRGB = 707,
     E_sRGBx = 708,
     E_sRGBA = 709,
     E_sBGRA = 710,
     E_ABGR = 711,
     E_SnormInt8 = 712,
     E_SnormInt16 = 713,
     E_UnormInt8 = 714,
     E_UnormInt16 = 715,
     E_UnormShort565 = 716,
     E_UnormShort555 = 717,
     E_UnormInt101010 = 718,
     E_SignedInt8 = 719,
     E_SignedInt16 = 720,
     E_SignedInt32 = 721,
     E_UnsignedInt8 = 722,
     E_UnsignedInt16 = 723,
     E_UnsignedInt32 = 724,
     E_HalfFloat = 725,
     E_Float = 726,
     E_UnormInt24 = 727,
     E_UnormInt101010_2 = 728,
     E_Bias = 729,
     E_Lod = 730,
     E_Grad = 731,
     E_ConstOffset = 732,
     E_Offset = 733,
     E_ConstOffsets = 734,
     E_Sample = 735,
     E_MinLod = 736,
     E_NotNaN = 737,
     E_NotInf = 738,
     E_NSZ = 739,
     E_AllowRecip = 740,
     E_Fast = 741,
     E_RTE = 742,
     E_RTZ = 743,
     E_RTP = 744,
     E_RTN = 745,
     E_Export = 746,
     E_Import = 747,
     E_ReadOnly = 748,
     E_WriteOnly = 749,
     E_ReadWrite = 750,
     E_Zext = 751,
     E_Sext = 752,
     E_ByVal = 753,
     E_Sret = 754,
     E_NoAlias = 755,
     E_NoCapture = 756,
     E_NoWrite = 757,
     E_NoReadWrite = 758,
     E_RelaxedPrecision = 759,
     E_SpecId = 760,
     E_Block = 761,
     E_BufferBlock = 762,
     E_RowMajor = 763,
     E_ColMajor = 764,
     E_ArrayStride = 765,
     E_MatrixStride = 766,
     E_GLSLShared = 767,
     E_GLSLPacked = 768,
     E_CPacked = 769,
     E_BuiltIn = 770,
     E_NoPerspective = 771,
     E_Flat = 772,
     E_Patch = 773,
     E_Centroid = 774,
     E_Invariant = 775,
     E_Restrict = 776,
     E_Aliased = 777,
     E_Volatile = 778,
     E_Constant = 779,
     E_Coherent = 780,
     E_NonWritable = 781,
     E_NonReadable = 782,
     E_SaturatedConversion = 783,
     E_Stream = 784,
     E_Location = 785,
     E_Component = 786,
     E_Index = 787,
     E_Binding = 788,
     E_DescriptorSet = 789,
     E_XfbBuffer = 790,
     E_XfbStride = 791,
     E_FuncParamAttr = 792,
     E_FPRoundingMode = 793,
     E_FPFastMathMode = 794,
     E_LinkageAttributes = 795,
     E_NoContraction = 796,
     E_InputAttachmentIndex = 797,
     E_Alignment = 798,
     E_MaxByteOffset = 799,
     E_AlignmentId = 800,
     E_MaxByteOffsetId = 801,
     E_ExplicitInterpAMD = 802,
     E_OverrideCoverageNV = 803,
     E_PassthroughNV = 804,
     E_ViewportRelativeNV = 805,
     E_SecondaryViewportRelativeNV = 806,
     E_NonUniformEXT = 807,
     E_HlslCounterBufferGOOGLE = 808,
     E_HlslSemanticGOOGLE = 809,
     E_Position = 810,
     E_PointSize = 811,
     E_ClipDistance = 812,
     E_CullDistance = 813,
     E_VertexId = 814,
     E_InstanceId = 815,
     E_PrimitiveId = 816,
     E_InvocationId = 817,
     E_Layer = 818,
     E_ViewportIndex = 819,
     E_TessLevelOuter = 820,
     E_TessLevelInner = 821,
     E_TessCoord = 822,
     E_PatchVertices = 823,
     E_FragCoord = 824,
     E_PointCoord = 825,
     E_FrontFacing = 826,
     E_SampleId = 827,
     E_SamplePosition = 828,
     E_SampleMask = 829,
     E_FragDepth = 830,
     E_HelperInvocation = 831,
     E_NumWorkgroups = 832,
     E_WorkgroupSize = 833,
     E_WorkgroupId = 834,
     E_LocalInvocationId = 835,
     E_GlobalInvocationId = 836,
     E_LocalInvocationIndex = 837,
     E_WorkDim = 838,
     E_GlobalSize = 839,
     E_EnqueuedWorkgroupSize = 840,
     E_GlobalOffset = 841,
     E_GlobalLinearId = 842,
     E_SubgroupMaxSize = 843,
     E_NumSubgroups = 844,
     E_NumEnqueuedSubgroups = 845,
     E_SubgroupId = 846,
     E_SubgroupLocalInvocationId = 847,
     E_VertexIndex = 848,
     E_InstanceIndex = 849,
     E_SubgroupEqMask = 850,
     E_SubgroupGeMask = 851,
     E_SubgroupGtMask = 852,
     E_SubgroupLeMask = 853,
     E_SubgroupLtMask = 854,
     E_SubgroupEqMaskKHR = 855,
     E_SubgroupGeMaskKHR = 856,
     E_SubgroupGtMaskKHR = 857,
     E_SubgroupLeMaskKHR = 858,
     E_SubgroupLtMaskKHR = 859,
     E_BaseVertex = 860,
     E_BaseInstance = 861,
     E_DrawIndex = 862,
     E_DeviceIndex = 863,
     E_ViewIndex = 864,
     E_BaryCoordNoPerspAMD = 865,
     E_BaryCoordNoPerspCentroidAMD = 866,
     E_BaryCoordNoPerspSampleAMD = 867,
     E_BaryCoordSmoothAMD = 868,
     E_BaryCoordSmoothCentroidAMD = 869,
     E_BaryCoordSmoothSampleAMD = 870,
     E_BaryCoordPullModelAMD = 871,
     E_FragStencilRefEXT = 872,
     E_ViewportMaskNV = 873,
     E_SecondaryPositionNV = 874,
     E_SecondaryViewportMaskNV = 875,
     E_PositionPerViewNV = 876,
     E_ViewportMaskPerViewNV = 877,
     E_FullyCoveredEXT = 878,
     E_Flatten = 879,
     E_DontFlatten = 880,
     E_Unroll = 881,
     E_DontUnroll = 882,
     E_DependencyInfinite = 883,
     E_DependencyLength = 884,
     E_Inline = 885,
     E_DontInline = 886,
     E_Pure = 887,
     E_Const = 888,
     E_Acquire = 889,
     E_Release = 890,
     E_AcquireRelease = 891,
     E_SequentiallyConsistent = 892,
     E_UniformMemory = 893,
     E_SubgroupMemory = 894,
     E_WorkgroupMemory = 895,
     E_CrossWorkgroupMemory = 896,
     E_AtomicCounterMemory = 897,
     E_ImageMemory = 898,
     E_Aligned = 899,
     E_Nontemporal = 900,
     E_CrossDevice = 901,
     E_Device = 902,
     E_Subgroup = 903,
     E_Invocation = 904,
     E_Reduce = 905,
     E_InclusiveScan = 906,
     E_ExclusiveScan = 907,
     E_ClusteredReduce = 908,
     E_PartitionedReduceNV = 909,
     E_PartitionedInclusiveScanNV = 910,
     E_PartitionedExclusiveScanNV = 911,
     E_NoWait = 912,
     E_WaitKernel = 913,
     E_WaitWorkGroup = 914,
     E_CmdExecTime = 915,
     E_Matrix = 916,
     E_Shader = 917,
     E_Tessellation = 918,
     E_Addresses = 919,
     E_Linkage = 920,
     E_Vector16 = 921,
     E_Float16Buffer = 922,
     E_Float16 = 923,
     E_Float64 = 924,
     E_Int64 = 925,
     E_Int64Atomics = 926,
     E_ImageBasic = 927,
     E_ImageReadWrite = 928,
     E_ImageMipmap = 929,
     E_Pipes = 930,
     E_Groups = 931,
     E_DeviceEnqueue = 932,
     E_LiteralSampler = 933,
     E_AtomicStorage = 934,
     E_Int16 = 935,
     E_TessellationPointSize = 936,
     E_GeometryPointSize = 937,
     E_ImageGatherExtended = 938,
     E_StorageImageMultisample = 939,
     E_UniformBufferArrayDynamicIndexing = 940,
     E_SampledImageArrayDynamicIndexing = 941,
     E_StorageBufferArrayDynamicIndexing = 942,
     E_StorageImageArrayDynamicIndexing = 943,
     E_ImageCubeArray = 944,
     E_SampleRateShading = 945,
     E_ImageRect = 946,
     E_SampledRect = 947,
     E_GenericPointer = 948,
     E_Int8 = 949,
     E_InputAttachment = 950,
     E_SparseResidency = 951,
     E_Sampled1D = 952,
     E_Image1D = 953,
     E_SampledCubeArray = 954,
     E_SampledBuffer = 955,
     E_ImageBuffer = 956,
     E_ImageMSArray = 957,
     E_StorageImageExtendedFormats = 958,
     E_ImageQuery = 959,
     E_DerivativeControl = 960,
     E_InterpolationFunction = 961,
     E_TransformFeedback = 962,
     E_GeometryStreams = 963,
     E_StorageImageReadWithoutFormat = 964,
     E_StorageImageWriteWithoutFormat = 965,
     E_MultiViewport = 966,
     E_SubgroupDispatch = 967,
     E_NamedBarrier = 968,
     E_PipeStorage = 969,
     E_GroupNonUniform = 970,
     E_GroupNonUniformVote = 971,
     E_GroupNonUniformArithmetic = 972,
     E_GroupNonUniformBallot = 973,
     E_GroupNonUniformShuffle = 974,
     E_GroupNonUniformShuffleRelative = 975,
     E_GroupNonUniformClustered = 976,
     E_GroupNonUniformQuad = 977,
     E_SubgroupBallotKHR = 978,
     E_DrawParameters = 979,
     E_SubgroupVoteKHR = 980,
     E_StorageBuffer16BitAccess = 981,
     E_StorageUniformBufferBlock16 = 982,
     E_UniformAndStorageBuffer16BitAccess = 983,
     E_StorageUniform16 = 984,
     E_StoragePushConstant16 = 985,
     E_StorageInputOutput16 = 986,
     E_DeviceGroup = 987,
     E_MultiView = 988,
     E_VariablePointersStorageBuffer = 989,
     E_VariablePointers = 990,
     E_AtomicStorageOps = 991,
     E_SampleMaskPostDepthCoverage = 992,
     E_Float16ImageAMD = 993,
     E_ImageGatherBiasLodAMD = 994,
     E_FragmentMaskAMD = 995,
     E_StencilExportEXT = 996,
     E_ImageReadWriteLodAMD = 997,
     E_SampleMaskOverrideCoverageNV = 998,
     E_GeometryShaderPassthroughNV = 999,
     E_ShaderViewportIndexLayerEXT = 1000,
     E_ShaderViewportIndexLayerNV = 1001,
     E_ShaderViewportMaskNV = 1002,
     E_ShaderStereoViewNV = 1003,
     E_PerViewAttributesNV = 1004,
     E_FragmentFullyCoveredEXT = 1005,
     E_ShaderNonUniformEXT = 1006,
     E_RuntimeDescriptorArrayEXT = 1007,
     E_InputAttachmentArrayDynamicIndexingEXT = 1008,
     E_UniformTexelBufferArrayDynamicIndexingEXT = 1009,
     E_StorageTexelBufferArrayDynamicIndexingEXT = 1010,
     E_UniformBufferArrayNonUniformIndexingEXT = 1011,
     E_SampledImageArrayNonUniformIndexingEXT = 1012,
     E_StorageBufferArrayNonUniformIndexingEXT = 1013,
     E_StorageImageArrayNonUniformIndexingEXT = 1014,
     E_InputAttachmentArrayNonUniformIndexingEXT = 1015,
     E_UniformTexelBufferArrayNonUniformIndexingEXT = 1016,
     E_StorageTexelBufferArrayNonUniformIndexingEXT = 1017,
     E_SubgroupShuffleINTEL = 1018,
     E_SubgroupBufferBlockIOINTEL = 1019,
     E_SubgroupImageBlockIOINTEL = 1020,
     E_GroupNonUniformPartitionedNV = 1021,
     E_Round = 1022,
     E_RoundEven = 1023,
     E_Trunc = 1024,
     E_FAbs = 1025,
     E_SAbs = 1026,
     E_FSign = 1027,
     E_SSign = 1028,
     E_Floor = 1029,
     E_Ceil = 1030,
     E_Fract = 1031,
     E_Radians = 1032,
     E_Degrees = 1033,
     E_Sin = 1034,
     E_Cos = 1035,
     E_Tan = 1036,
     E_Asin = 1037,
     E_Acos = 1038,
     E_Atan = 1039,
     E_Sinh = 1040,
     E_Cosh = 1041,
     E_Tanh = 1042,
     E_Asinh = 1043,
     E_Acosh = 1044,
     E_Atanh = 1045,
     E_Atan2 = 1046,
     E_Pow = 1047,
     E_Exp = 1048,
     E_Log = 1049,
     E_Exp2 = 1050,
     E_Log2 = 1051,
     E_Sqrt = 1052,
     E_InverseSqrt = 1053,
     E_Determinant = 1054,
     E_MatrixInverse = 1055,
     E_Modf = 1056,
     E_ModfStruct = 1057,
     E_FMin = 1058,
     E_UMin = 1059,
     E_SMin = 1060,
     E_FMax = 1061,
     E_UMax = 1062,
     E_SMax = 1063,
     E_FClamp = 1064,
     E_UClamp = 1065,
     E_SClamp = 1066,
     E_FMix = 1067,
     E_Step = 1068,
     E_SmoothStep = 1069,
     E_Fma = 1070,
     E_Frexp = 1071,
     E_FrexpStruct = 1072,
     E_Ldexp = 1073,
     E_PackSnorm4x8 = 1074,
     E_PackUnorm4x8 = 1075,
     E_PackSnorm2x16 = 1076,
     E_PackUnorm2x16 = 1077,
     E_PackHalf2x16 = 1078,
     E_PackDouble2x32 = 1079,
     E_UnpackSnorm2x16 = 1080,
     E_UnpackUnorm2x16 = 1081,
     E_UnpackHalf2x16 = 1082,
     E_UnpackSnorm4x8 = 1083,
     E_UnpackUnorm4x8 = 1084,
     E_UnpackDouble2x32 = 1085,
     E_Length = 1086,
     E_Distance = 1087,
     E_Cross = 1088,
     E_Normalize = 1089,
     E_FaceForward = 1090,
     E_Reflect = 1091,
     E_Refract = 1092,
     E_FindILsb = 1093,
     E_FindSMsb = 1094,
     E_FindUMsb = 1095,
     E_InterpolateAtCentroid = 1096,
     E_InterpolateAtSample = 1097,
     E_InterpolateAtOffset = 1098,
     E_NMin = 1099,
     E_NMax = 1100,
     E_NClamp = 1101
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 973 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/y.tab.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  311
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1760

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  847
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  858
/* YYNRULES -- Number of states.  */
#define YYNSTATES  875

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   1101

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   627,   628,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,   646,   647,   648,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,   683,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,   709,   710,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,   724,
     725,   726,   727,   728,   729,   730,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   741,   742,   743,   744,
     745,   746,   747,   748,   749,   750,   751,   752,   753,   754,
     755,   756,   757,   758,   759,   760,   761,   762,   763,   764,
     765,   766,   767,   768,   769,   770,   771,   772,   773,   774,
     775,   776,   777,   778,   779,   780,   781,   782,   783,   784,
     785,   786,   787,   788,   789,   790,   791,   792,   793,   794,
     795,   796,   797,   798,   799,   800,   801,   802,   803,   804,
     805,   806,   807,   808,   809,   810,   811,   812,   813,   814,
     815,   816,   817,   818,   819,   820,   821,   822,   823,   824,
     825,   826,   827,   828,   829,   830,   831,   832,   833,   834,
     835,   836,   837,   838,   839,   840,   841,   842,   843,   844,
     845,   846
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    13,    16,    18,    23,    30,
      32,    35,    39,    41,    44,    49,    52,    53,    55,    57,
      59,    61,    63,    65,    67,    69,    71,    73,    75,    77,
      79,    81,    83,    85,    87,    89,    91,    93,    95,    97,
      99,   101,   103,   105,   107,   109,   111,   113,   115,   117,
     119,   121,   123,   125,   127,   129,   131,   133,   135,   137,
     139,   141,   143,   145,   147,   149,   151,   153,   155,   157,
     159,   161,   163,   165,   167,   169,   171,   173,   175,   177,
     179,   181,   183,   185,   187,   189,   191,   193,   195,   197,
     199,   201,   203,   205,   207,   209,   211,   213,   215,   217,
     219,   221,   223,   225,   227,   229,   231,   233,   235,   237,
     239,   241,   243,   245,   247,   249,   251,   253,   255,   257,
     259,   261,   263,   265,   267,   269,   271,   273,   275,   277,
     279,   281,   283,   285,   287,   289,   291,   293,   295,   297,
     299,   301,   303,   305,   307,   309,   311,   313,   315,   317,
     319,   321,   323,   325,   327,   329,   331,   333,   335,   337,
     339,   341,   343,   345,   347,   349,   351,   353,   355,   357,
     359,   361,   363,   365,   367,   369,   371,   373,   375,   377,
     379,   381,   383,   385,   387,   389,   391,   393,   395,   397,
     399,   401,   403,   405,   407,   409,   411,   413,   415,   417,
     419,   421,   423,   425,   427,   429,   431,   433,   435,   437,
     439,   441,   443,   445,   447,   449,   451,   453,   455,   457,
     459,   461,   463,   465,   467,   469,   471,   473,   475,   477,
     479,   481,   483,   485,   487,   489,   491,   493,   495,   497,
     499,   501,   503,   505,   507,   509,   511,   513,   515,   517,
     519,   521,   523,   525,   527,   529,   531,   533,   535,   537,
     539,   541,   543,   545,   547,   549,   551,   553,   555,   557,
     559,   561,   563,   565,   567,   569,   571,   573,   575,   577,
     579,   581,   583,   585,   587,   589,   591,   593,   595,   597,
     599,   601,   603,   605,   607,   609,   611,   613,   615,   617,
     619,   621,   623,   625,   627,   629,   631,   633,   635,   637,
     639,   641,   643,   645,   647,   649,   651,   653,   655,   657,
     659,   661,   663,   665,   667,   669,   671,   673,   675,   677,
     679,   681,   683,   685,   687,   689,   691,   693,   695,   697,
     699,   701,   703,   705,   707,   709,   711,   713,   715,   717,
     719,   721,   723,   725,   727,   729,   731,   733,   735,   737,
     739,   741,   743,   745,   747,   749,   751,   753,   755,   757,
     759,   761,   763,   765,   767,   769,   771,   773,   775,   777,
     779,   781,   783,   785,   787,   789,   791,   793,   795,   797,
     799,   801,   803,   805,   807,   809,   811,   813,   815,   817,
     819,   821,   823,   825,   827,   829,   831,   833,   835,   837,
     839,   841,   843,   845,   847,   849,   851,   853,   855,   857,
     859,   861,   863,   865,   867,   869,   871,   873,   875,   877,
     879,   881,   883,   885,   887,   889,   891,   893,   895,   897,
     899,   901,   903,   905,   907,   909,   911,   913,   915,   917,
     919,   921,   923,   925,   927,   929,   931,   933,   935,   937,
     939,   941,   943,   945,   947,   949,   951,   953,   955,   957,
     959,   961,   963,   965,   967,   969,   971,   973,   975,   977,
     979,   981,   983,   985,   987,   989,   991,   993,   995,   997,
     999,  1001,  1003,  1005,  1007,  1009,  1011,  1013,  1015,  1017,
    1019,  1021,  1023,  1025,  1027,  1029,  1031,  1033,  1035,  1037,
    1039,  1041,  1043,  1045,  1047,  1049,  1051,  1053,  1055,  1057,
    1059,  1061,  1063,  1065,  1067,  1069,  1071,  1073,  1075,  1077,
    1079,  1081,  1083,  1085,  1087,  1089,  1091,  1093,  1095,  1097,
    1099,  1101,  1103,  1105,  1107,  1109,  1111,  1113,  1115,  1117,
    1119,  1121,  1123,  1125,  1127,  1129,  1131,  1133,  1135,  1137,
    1139,  1141,  1143,  1145,  1147,  1149,  1151,  1153,  1155,  1157,
    1159,  1161,  1163,  1165,  1167,  1169,  1171,  1173,  1175,  1177,
    1179,  1181,  1183,  1185,  1187,  1189,  1191,  1193,  1195,  1197,
    1199,  1201,  1203,  1205,  1207,  1209,  1211,  1213,  1215,  1217,
    1219,  1221,  1223,  1225,  1227,  1229,  1231,  1233,  1235,  1237,
    1239,  1241,  1243,  1245,  1247,  1249,  1251,  1253,  1255,  1257,
    1259,  1261,  1263,  1265,  1267,  1269,  1271,  1273,  1275,  1277,
    1279,  1281,  1283,  1285,  1287,  1289,  1291,  1293,  1295,  1297,
    1299,  1301,  1303,  1305,  1307,  1309,  1311,  1313,  1315,  1317,
    1319,  1321,  1323,  1325,  1327,  1329,  1331,  1333,  1335,  1337,
    1339,  1341,  1343,  1345,  1347,  1349,  1351,  1353,  1355,  1357,
    1359,  1361,  1363,  1365,  1367,  1369,  1371,  1373,  1375,  1377,
    1379,  1381,  1383,  1385,  1387,  1389,  1391,  1393,  1395,  1397,
    1399,  1401,  1403,  1405,  1407,  1409,  1411,  1413,  1415,  1417,
    1419,  1421,  1423,  1425,  1427,  1429,  1431,  1433,  1435,  1437,
    1439,  1441,  1443,  1445,  1447,  1449,  1451,  1453,  1455,  1457,
    1459,  1461,  1463,  1465,  1467,  1469,  1471,  1473,  1475,  1477,
    1479,  1481,  1483,  1485,  1487,  1489,  1491,  1493,  1495,  1497,
    1499,  1501,  1503,  1505,  1507,  1509,  1511,  1513,  1515,  1517,
    1519,  1521,  1523,  1525,  1527,  1529,  1531,  1533,  1535,  1537,
    1539,  1541,  1543,  1545,  1547,  1549,  1551,  1553,  1555,  1557,
    1559,  1561,  1563,  1565,  1567,  1569,  1571,  1573,  1575,  1577,
    1579,  1581,  1583,  1585,  1587,  1589,  1591,  1593,  1595,  1597,
    1599,  1601,  1603,  1605,  1607,  1609,  1611,  1613,  1615,  1617,
    1619,  1621,  1623,  1625,  1627,  1629,  1631,  1633,  1635,  1637,
    1639,  1641,  1643,  1645,  1647,  1649,  1651,  1653,  1655,  1657,
    1659,  1661,  1663,  1665,  1667,  1669,  1671,  1673,  1675,  1677,
    1679,  1681,  1683,  1685,  1687,  1689,  1691,  1693,  1695,  1697,
    1699,  1701,  1703,  1705,  1707,  1709,  1711,  1713,  1715,  1717,
    1719,  1721,  1723,  1725,  1727,  1729,  1731,  1733,  1735
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     848,     0,    -1,   849,   852,    -1,   852,    -1,     9,   859,
       3,   850,    -1,   850,   851,    -1,   851,    -1,   860,   857,
     857,     3,    -1,   861,   858,   858,   857,   857,     3,    -1,
     853,    -1,   853,     3,    -1,   853,     3,   854,    -1,   854,
      -1,   862,   855,    -1,   857,     8,   862,   855,    -1,   855,
     856,    -1,    -1,   312,    -1,   313,    -1,   314,    -1,   315,
      -1,   316,    -1,   317,    -1,   318,    -1,   319,    -1,   320,
      -1,   321,    -1,   322,    -1,   323,    -1,   324,    -1,   325,
      -1,   326,    -1,   327,    -1,   328,    -1,   329,    -1,   330,
      -1,   331,    -1,   332,    -1,   333,    -1,   334,    -1,   335,
      -1,   336,    -1,   337,    -1,   338,    -1,   339,    -1,   340,
      -1,   341,    -1,   342,    -1,   343,    -1,   344,    -1,   345,
      -1,   346,    -1,   347,    -1,   348,    -1,   349,    -1,   350,
      -1,   351,    -1,   352,    -1,   353,    -1,   354,    -1,   355,
      -1,   356,    -1,   357,    -1,   358,    -1,   359,    -1,   360,
      -1,   361,    -1,   362,    -1,   363,    -1,   364,    -1,   365,
      -1,   366,    -1,   367,    -1,   368,    -1,   369,    -1,   370,
      -1,   371,    -1,   372,    -1,   373,    -1,   374,    -1,   375,
      -1,   376,    -1,   377,    -1,   378,    -1,   379,    -1,   380,
      -1,   381,    -1,   382,    -1,   383,    -1,   384,    -1,   385,
      -1,   386,    -1,   387,    -1,   388,    -1,   389,    -1,   390,
      -1,   391,    -1,   392,    -1,   393,    -1,   394,    -1,   395,
      -1,   396,    -1,   397,    -1,   398,    -1,   399,    -1,   400,
      -1,   401,    -1,   402,    -1,   403,    -1,   404,    -1,   405,
      -1,   406,    -1,   407,    -1,   408,    -1,   409,    -1,   410,
      -1,   411,    -1,   412,    -1,   413,    -1,   414,    -1,   415,
      -1,   416,    -1,   417,    -1,   418,    -1,   419,    -1,   420,
      -1,   421,    -1,   422,    -1,   423,    -1,   424,    -1,   425,
      -1,   426,    -1,   427,    -1,   428,    -1,   429,    -1,   430,
      -1,   431,    -1,   432,    -1,   433,    -1,   434,    -1,   435,
      -1,   436,    -1,   437,    -1,   438,    -1,   439,    -1,   440,
      -1,   441,    -1,   442,    -1,   443,    -1,   444,    -1,   445,
      -1,   446,    -1,   447,    -1,   448,    -1,   449,    -1,   450,
      -1,   451,    -1,   452,    -1,   453,    -1,   454,    -1,   455,
      -1,   456,    -1,   457,    -1,   458,    -1,   459,    -1,   460,
      -1,   461,    -1,   462,    -1,   463,    -1,   464,    -1,   465,
      -1,   466,    -1,   467,    -1,   468,    -1,   469,    -1,   470,
      -1,   471,    -1,   472,    -1,   473,    -1,   474,    -1,   475,
      -1,   476,    -1,   477,    -1,   478,    -1,   479,    -1,   480,
      -1,   481,    -1,   482,    -1,   483,    -1,   484,    -1,   485,
      -1,   486,    -1,   487,    -1,   488,    -1,   489,    -1,   490,
      -1,   491,    -1,   492,    -1,   493,    -1,   494,    -1,   495,
      -1,   496,    -1,   497,    -1,   498,    -1,   499,    -1,   500,
      -1,   501,    -1,   502,    -1,   503,    -1,   504,    -1,   505,
      -1,   506,    -1,   507,    -1,   508,    -1,   509,    -1,   510,
      -1,   511,    -1,   512,    -1,   513,    -1,   514,    -1,   515,
      -1,   516,    -1,   517,    -1,   518,    -1,   519,    -1,   520,
      -1,   521,    -1,   522,    -1,   523,    -1,   524,    -1,   525,
      -1,   526,    -1,   527,    -1,   528,    -1,   529,    -1,   530,
      -1,   531,    -1,   532,    -1,   533,    -1,   534,    -1,   535,
      -1,   536,    -1,   537,    -1,   538,    -1,   539,    -1,   540,
      -1,   541,    -1,   542,    -1,   543,    -1,   544,    -1,   545,
      -1,   546,    -1,   547,    -1,   548,    -1,   549,    -1,   550,
      -1,   551,    -1,   552,    -1,   553,    -1,   554,    -1,   555,
      -1,   556,    -1,   557,    -1,   558,    -1,   559,    -1,   560,
      -1,   561,    -1,   562,    -1,   563,    -1,   564,    -1,   565,
      -1,   566,    -1,   567,    -1,   568,    -1,   569,    -1,   570,
      -1,   571,    -1,   572,    -1,   573,    -1,   574,    -1,   575,
      -1,   576,    -1,   577,    -1,   578,    -1,   579,    -1,   580,
      -1,   581,    -1,   582,    -1,   583,    -1,   584,    -1,   585,
      -1,   586,    -1,   587,    -1,   588,    -1,   589,    -1,   590,
      -1,   591,    -1,   592,    -1,   593,    -1,   594,    -1,   595,
      -1,   596,    -1,   597,    -1,   598,    -1,   599,    -1,   600,
      -1,   601,    -1,   602,    -1,   603,    -1,   604,    -1,   605,
      -1,   606,    -1,   607,    -1,   608,    -1,   609,    -1,   610,
      -1,   611,    -1,   612,    -1,   613,    -1,   614,    -1,   615,
      -1,   616,    -1,   617,    -1,   618,    -1,   619,    -1,   620,
      -1,   621,    -1,   622,    -1,   623,    -1,   624,    -1,   625,
      -1,   626,    -1,   627,    -1,   628,    -1,   629,    -1,   630,
      -1,   631,    -1,   632,    -1,   633,    -1,   634,    -1,   635,
      -1,   636,    -1,   637,    -1,   638,    -1,   639,    -1,   640,
      -1,   641,    -1,   642,    -1,   643,    -1,   644,    -1,   645,
      -1,   646,    -1,   647,    -1,   648,    -1,   649,    -1,   650,
      -1,   651,    -1,   652,    -1,   653,    -1,   654,    -1,   655,
      -1,   656,    -1,   657,    -1,   658,    -1,   659,    -1,   660,
      -1,   661,    -1,   662,    -1,   663,    -1,   664,    -1,   665,
      -1,   666,    -1,   667,    -1,   668,    -1,   669,    -1,   670,
      -1,   671,    -1,   672,    -1,   673,    -1,   674,    -1,   675,
      -1,   676,    -1,   677,    -1,   678,    -1,   679,    -1,   680,
      -1,   681,    -1,   682,    -1,   683,    -1,   684,    -1,   685,
      -1,   686,    -1,   687,    -1,   688,    -1,   689,    -1,   690,
      -1,   691,    -1,   692,    -1,   693,    -1,   694,    -1,   695,
      -1,   696,    -1,   697,    -1,   698,    -1,   699,    -1,   700,
      -1,   701,    -1,   702,    -1,   703,    -1,   704,    -1,   705,
      -1,   706,    -1,   707,    -1,   708,    -1,   709,    -1,   710,
      -1,   711,    -1,   712,    -1,   713,    -1,   714,    -1,   715,
      -1,   716,    -1,   717,    -1,   718,    -1,   719,    -1,   720,
      -1,   721,    -1,   722,    -1,   723,    -1,   724,    -1,   725,
      -1,   726,    -1,   727,    -1,   728,    -1,   729,    -1,   730,
      -1,   731,    -1,   732,    -1,   733,    -1,   734,    -1,   735,
      -1,   736,    -1,   737,    -1,   738,    -1,   739,    -1,   740,
      -1,   741,    -1,   742,    -1,   743,    -1,   744,    -1,   745,
      -1,   746,    -1,   747,    -1,   748,    -1,   749,    -1,   750,
      -1,   751,    -1,   752,    -1,   753,    -1,   754,    -1,   755,
      -1,   756,    -1,   757,    -1,   758,    -1,   759,    -1,   760,
      -1,   761,    -1,   762,    -1,   763,    -1,   764,    -1,   765,
      -1,   766,    -1,   767,    -1,   768,    -1,   769,    -1,   770,
      -1,   771,    -1,   772,    -1,   773,    -1,   774,    -1,   775,
      -1,   776,    -1,   777,    -1,   778,    -1,   779,    -1,   780,
      -1,   781,    -1,   782,    -1,   783,    -1,   784,    -1,   785,
      -1,   786,    -1,   787,    -1,   788,    -1,   789,    -1,   790,
      -1,   791,    -1,   792,    -1,   793,    -1,   794,    -1,   795,
      -1,   796,    -1,   797,    -1,   798,    -1,   799,    -1,   800,
      -1,   801,    -1,   802,    -1,   803,    -1,   804,    -1,   805,
      -1,   806,    -1,   807,    -1,   808,    -1,   809,    -1,   810,
      -1,   811,    -1,   812,    -1,   813,    -1,   814,    -1,   815,
      -1,   816,    -1,   817,    -1,   818,    -1,   819,    -1,   820,
      -1,   821,    -1,   822,    -1,   823,    -1,   824,    -1,   825,
      -1,   826,    -1,   827,    -1,   828,    -1,   829,    -1,   830,
      -1,   831,    -1,   832,    -1,   833,    -1,   834,    -1,   835,
      -1,   836,    -1,   837,    -1,   838,    -1,   839,    -1,   840,
      -1,   841,    -1,   842,    -1,   843,    -1,   844,    -1,   845,
      -1,   846,    -1,   858,    -1,     7,    -1,   857,    -1,     5,
      -1,     6,    -1,    10,    -1,    11,    -1,    12,    -1,    13,
      -1,    14,    -1,    15,    -1,    16,    -1,    17,    -1,    18,
      -1,    19,    -1,    20,    -1,    21,    -1,    22,    -1,    23,
      -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,    28,
      -1,    29,    -1,    30,    -1,    31,    -1,    32,    -1,    33,
      -1,    34,    -1,    35,    -1,    36,    -1,    37,    -1,    38,
      -1,    39,    -1,    40,    -1,    41,    -1,    42,    -1,    43,
      -1,    44,    -1,    45,    -1,    46,    -1,    47,    -1,    48,
      -1,    49,    -1,    50,    -1,    51,    -1,    52,    -1,    53,
      -1,    54,    -1,    55,    -1,    56,    -1,    57,    -1,    58,
      -1,    59,    -1,    60,    -1,    61,    -1,    62,    -1,    63,
      -1,    64,    -1,    65,    -1,    66,    -1,    67,    -1,    68,
      -1,    69,    -1,    70,    -1,    71,    -1,    72,    -1,    73,
      -1,    74,    -1,    75,    -1,    76,    -1,    77,    -1,    78,
      -1,    79,    -1,    80,    -1,    81,    -1,    82,    -1,    83,
      -1,    84,    -1,    85,    -1,    86,    -1,    87,    -1,    88,
      -1,    89,    -1,    90,    -1,    91,    -1,    92,    -1,    93,
      -1,    94,    -1,    95,    -1,    96,    -1,    97,    -1,    98,
      -1,    99,    -1,   100,    -1,   101,    -1,   102,    -1,   103,
      -1,   104,    -1,   105,    -1,   106,    -1,   107,    -1,   108,
      -1,   109,    -1,   110,    -1,   111,    -1,   112,    -1,   113,
      -1,   114,    -1,   115,    -1,   116,    -1,   117,    -1,   118,
      -1,   119,    -1,   120,    -1,   121,    -1,   122,    -1,   123,
      -1,   124,    -1,   125,    -1,   126,    -1,   127,    -1,   128,
      -1,   129,    -1,   130,    -1,   131,    -1,   132,    -1,   133,
      -1,   134,    -1,   135,    -1,   136,    -1,   137,    -1,   138,
      -1,   139,    -1,   140,    -1,   141,    -1,   142,    -1,   143,
      -1,   144,    -1,   145,    -1,   146,    -1,   147,    -1,   148,
      -1,   149,    -1,   150,    -1,   151,    -1,   152,    -1,   153,
      -1,   154,    -1,   155,    -1,   156,    -1,   157,    -1,   158,
      -1,   159,    -1,   160,    -1,   161,    -1,   162,    -1,   163,
      -1,   164,    -1,   165,    -1,   166,    -1,   167,    -1,   168,
      -1,   169,    -1,   170,    -1,   171,    -1,   172,    -1,   173,
      -1,   174,    -1,   175,    -1,   176,    -1,   177,    -1,   178,
      -1,   179,    -1,   180,    -1,   181,    -1,   182,    -1,   183,
      -1,   184,    -1,   185,    -1,   186,    -1,   187,    -1,   188,
      -1,   189,    -1,   190,    -1,   191,    -1,   192,    -1,   193,
      -1,   194,    -1,   195,    -1,   196,    -1,   197,    -1,   198,
      -1,   199,    -1,   200,    -1,   201,    -1,   202,    -1,   203,
      -1,   204,    -1,   205,    -1,   206,    -1,   207,    -1,   208,
      -1,   209,    -1,   210,    -1,   211,    -1,   212,    -1,   213,
      -1,   214,    -1,   215,    -1,   216,    -1,   217,    -1,   218,
      -1,   219,    -1,   220,    -1,   221,    -1,   222,    -1,   223,
      -1,   224,    -1,   225,    -1,   226,    -1,   227,    -1,   228,
      -1,   229,    -1,   230,    -1,   231,    -1,   232,    -1,   233,
      -1,   234,    -1,   235,    -1,   236,    -1,   237,    -1,   238,
      -1,   239,    -1,   240,    -1,   241,    -1,   242,    -1,   243,
      -1,   244,    -1,   245,    -1,   246,    -1,   247,    -1,   248,
      -1,   249,    -1,   250,    -1,   251,    -1,   252,    -1,   253,
      -1,   254,    -1,   255,    -1,   256,    -1,   257,    -1,   258,
      -1,   259,    -1,   260,    -1,   261,    -1,   262,    -1,   263,
      -1,   264,    -1,   265,    -1,   266,    -1,   267,    -1,   268,
      -1,   269,    -1,   270,    -1,   271,    -1,   272,    -1,   273,
      -1,   274,    -1,   275,    -1,   276,    -1,   277,    -1,   278,
      -1,   279,    -1,   280,    -1,   281,    -1,   282,    -1,   283,
      -1,   284,    -1,   285,    -1,   286,    -1,   287,    -1,   288,
      -1,   289,    -1,   290,    -1,   291,    -1,   292,    -1,   293,
      -1,   294,    -1,   295,    -1,   296,    -1,   297,    -1,   298,
      -1,   299,    -1,   300,    -1,   301,    -1,   302,    -1,   303,
      -1,   304,    -1,   305,    -1,   306,    -1,   307,    -1,   308,
      -1,   309,    -1,   310,    -1,   311,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   862,   862,   862,   863,   870,   873,   876,   883,   893,
     895,   897,   899,   901,   907,   917,   921,   925,   930,   935,
     940,   945,   950,   955,   960,   965,   970,   975,   980,   985,
     990,   995,  1000,  1005,  1010,  1015,  1020,  1025,  1030,  1035,
    1040,  1045,  1050,  1055,  1060,  1065,  1070,  1075,  1080,  1085,
    1090,  1095,  1100,  1105,  1110,  1115,  1120,  1125,  1130,  1135,
    1140,  1145,  1150,  1155,  1160,  1165,  1170,  1175,  1180,  1185,
    1190,  1195,  1200,  1205,  1210,  1215,  1220,  1225,  1230,  1235,
    1240,  1245,  1250,  1255,  1260,  1265,  1270,  1275,  1280,  1285,
    1290,  1295,  1300,  1305,  1310,  1315,  1320,  1325,  1330,  1335,
    1340,  1345,  1350,  1355,  1360,  1365,  1370,  1375,  1380,  1385,
    1390,  1395,  1400,  1405,  1410,  1415,  1420,  1425,  1430,  1435,
    1440,  1445,  1450,  1455,  1460,  1465,  1470,  1475,  1480,  1485,
    1490,  1495,  1500,  1505,  1510,  1515,  1520,  1525,  1530,  1535,
    1540,  1545,  1550,  1555,  1560,  1565,  1570,  1575,  1580,  1585,
    1590,  1595,  1600,  1605,  1610,  1615,  1620,  1625,  1630,  1635,
    1640,  1645,  1650,  1655,  1660,  1665,  1670,  1675,  1680,  1685,
    1690,  1695,  1700,  1705,  1710,  1715,  1720,  1725,  1730,  1735,
    1740,  1745,  1750,  1755,  1760,  1765,  1770,  1775,  1780,  1785,
    1790,  1795,  1800,  1805,  1810,  1815,  1820,  1825,  1830,  1835,
    1840,  1845,  1850,  1855,  1860,  1865,  1870,  1875,  1880,  1885,
    1890,  1895,  1900,  1905,  1910,  1915,  1920,  1925,  1930,  1935,
    1940,  1945,  1950,  1955,  1960,  1965,  1970,  1975,  1980,  1985,
    1990,  1995,  2000,  2005,  2010,  2015,  2020,  2025,  2030,  2035,
    2040,  2045,  2050,  2055,  2060,  2065,  2070,  2075,  2080,  2085,
    2090,  2095,  2100,  2105,  2110,  2115,  2120,  2125,  2130,  2135,
    2140,  2145,  2150,  2155,  2160,  2165,  2170,  2175,  2180,  2185,
    2190,  2195,  2200,  2205,  2210,  2215,  2220,  2225,  2230,  2235,
    2240,  2245,  2250,  2255,  2260,  2265,  2270,  2275,  2280,  2285,
    2290,  2295,  2300,  2305,  2310,  2315,  2320,  2325,  2330,  2335,
    2340,  2345,  2350,  2355,  2360,  2365,  2370,  2375,  2380,  2385,
    2390,  2395,  2400,  2405,  2410,  2415,  2420,  2425,  2430,  2435,
    2440,  2445,  2450,  2455,  2460,  2465,  2470,  2475,  2480,  2485,
    2490,  2495,  2500,  2505,  2510,  2515,  2520,  2525,  2530,  2535,
    2540,  2545,  2550,  2555,  2560,  2565,  2570,  2575,  2580,  2585,
    2590,  2595,  2600,  2605,  2610,  2615,  2620,  2625,  2630,  2635,
    2640,  2645,  2650,  2655,  2660,  2665,  2670,  2675,  2680,  2685,
    2690,  2695,  2700,  2705,  2710,  2715,  2720,  2725,  2730,  2735,
    2740,  2745,  2750,  2755,  2760,  2765,  2770,  2775,  2780,  2785,
    2790,  2795,  2800,  2805,  2810,  2815,  2820,  2825,  2830,  2835,
    2840,  2845,  2850,  2855,  2860,  2865,  2870,  2875,  2880,  2885,
    2890,  2895,  2900,  2905,  2910,  2915,  2920,  2925,  2930,  2935,
    2940,  2945,  2950,  2955,  2960,  2965,  2970,  2975,  2980,  2985,
    2990,  2995,  3000,  3005,  3010,  3015,  3020,  3025,  3030,  3035,
    3040,  3045,  3050,  3055,  3060,  3065,  3070,  3075,  3080,  3085,
    3090,  3095,  3100,  3105,  3110,  3115,  3120,  3125,  3130,  3135,
    3140,  3145,  3150,  3155,  3160,  3165,  3170,  3175,  3180,  3185,
    3190,  3195,  3200,  3205,  3210,  3215,  3220,  3225,  3230,  3235,
    3240,  3245,  3250,  3255,  3260,  3265,  3270,  3275,  3280,  3285,
    3290,  3295,  3300,  3305,  3310,  3315,  3320,  3325,  3330,  3335,
    3340,  3345,  3350,  3355,  3360,  3365,  3370,  3375,  3380,  3385,
    3390,  3395,  3400,  3405,  3410,  3415,  3420,  3425,  3430,  3435,
    3440,  3445,  3450,  3455,  3460,  3465,  3470,  3475,  3480,  3485,
    3490,  3495,  3500,  3505,  3510,  3515,  3520,  3525,  3530,  3535,
    3540,  3545,  3550,  3555,  3560,  3565,  3570,  3575,  3580,  3585,
    3590,  3595,  3600,  3604,  3611,  3614,  3618,  3621,  3624,  3627,
    3636,  3642,  3648,  3654,  3660,  3666,  3672,  3678,  3684,  3690,
    3696,  3702,  3708,  3714,  3720,  3726,  3732,  3738,  3744,  3750,
    3756,  3762,  3768,  3774,  3780,  3786,  3792,  3798,  3804,  3810,
    3816,  3822,  3828,  3834,  3840,  3846,  3852,  3858,  3864,  3870,
    3876,  3882,  3888,  3894,  3900,  3906,  3912,  3918,  3924,  3930,
    3936,  3942,  3948,  3954,  3960,  3966,  3972,  3978,  3984,  3990,
    3996,  4002,  4008,  4014,  4020,  4026,  4032,  4038,  4044,  4050,
    4056,  4062,  4068,  4074,  4080,  4086,  4092,  4098,  4104,  4110,
    4116,  4122,  4128,  4134,  4140,  4146,  4152,  4158,  4164,  4170,
    4176,  4182,  4188,  4194,  4200,  4206,  4212,  4218,  4224,  4230,
    4236,  4242,  4248,  4254,  4260,  4266,  4272,  4278,  4284,  4290,
    4296,  4302,  4308,  4314,  4320,  4326,  4332,  4338,  4344,  4350,
    4356,  4362,  4368,  4374,  4380,  4386,  4392,  4398,  4404,  4410,
    4416,  4422,  4428,  4434,  4440,  4446,  4452,  4458,  4464,  4470,
    4476,  4482,  4488,  4494,  4500,  4506,  4512,  4518,  4524,  4530,
    4536,  4542,  4548,  4554,  4560,  4566,  4572,  4578,  4584,  4590,
    4596,  4602,  4608,  4614,  4620,  4626,  4632,  4638,  4644,  4650,
    4656,  4662,  4668,  4674,  4680,  4686,  4692,  4698,  4704,  4710,
    4716,  4722,  4728,  4734,  4740,  4746,  4752,  4758,  4764,  4770,
    4776,  4782,  4788,  4794,  4800,  4806,  4812,  4818,  4824,  4830,
    4836,  4842,  4848,  4854,  4860,  4866,  4872,  4878,  4884,  4890,
    4896,  4902,  4908,  4914,  4920,  4926,  4932,  4938,  4944,  4950,
    4956,  4962,  4968,  4974,  4980,  4986,  4992,  4998,  5004,  5010,
    5016,  5022,  5028,  5034,  5040,  5046,  5052,  5058,  5064,  5070,
    5076,  5082,  5088,  5094,  5100,  5106,  5112,  5118,  5124,  5130,
    5136,  5142,  5148,  5154,  5160,  5166,  5172,  5178,  5184,  5190,
    5196,  5202,  5208,  5214,  5220,  5226,  5232,  5238,  5244,  5250,
    5256,  5262,  5268,  5274,  5280,  5286,  5292,  5298,  5304,  5310,
    5316,  5322,  5328,  5334,  5340,  5346,  5352,  5358,  5364,  5370,
    5376,  5382,  5388,  5394,  5400,  5406,  5412,  5418,  5424
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NEWLINE", "MAYBE_NEWLINE", "IDENTIFIER",
  "NUMBER", "STRING", "EQUALS", "HEADER_KEYWORD", "HEADER_CLASS",
  "HEADER_IO_KEYWORD", "HEADER_UNIFORM_KEYWORD", "OpNop", "OpUndef",
  "OpSourceContinued", "OpSource", "OpSourceExtension", "OpName",
  "OpMemberName", "OpString", "OpLine", "OpNoLine", "OpDecorate",
  "OpMemberDecorate", "OpDecorationGroup", "OpGroupDecorate",
  "OpGroupMemberDecorate", "OpExtension", "OpExtInstImport", "OpExtInst",
  "OpMemoryModel", "OpEntryPoint", "OpExecutionMode", "OpCapability",
  "OpTypeVoid", "OpTypeBool", "OpTypeInt", "OpTypeFloat", "OpTypeVector",
  "OpTypeMatrix", "OpTypeSampler", "OpTypeSampledImage", "OpTypeArray",
  "OpTypeRuntimeArray", "OpTypeStruct", "OpTypeOpaque", "OpTypePointer",
  "OpTypeFunction", "OpTypeEvent", "OpTypeDeviceEvent", "OpTypeReserveId",
  "OpTypeQueue", "OpTypePipe", "OpTypeForwardPointer", "OpConstantTrue",
  "OpConstantFalse", "OpConstant", "OpConstantComposite",
  "OpConstantSampler", "OpConstantNull", "OpSpecConstantTrue",
  "OpSpecConstantFalse", "OpSpecConstant", "OpSpecConstantComposite",
  "OpSpecConstantOp", "OpVariable", "OpImageTexelPointer", "OpLoad",
  "OpStore", "OpCopyMemory", "OpCopyMemorySized", "OpAccessChain",
  "OpInBoundsAccessChain", "OpPtrAccessChain", "OpArrayLength",
  "OpGenericPtrMemSemantics", "OpInBoundsPtrAccessChain", "OpFunction",
  "OpFunctionParameter", "OpFunctionEnd", "OpFunctionCall",
  "OpSampledImage", "OpImageSampleImplicitLod", "OpImageSampleExplicitLod",
  "OpImageSampleDrefImplicitLod", "OpImageSampleDrefExplicitLod",
  "OpImageSampleProjImplicitLod", "OpImageSampleProjExplicitLod",
  "OpImageSampleProjDrefImplicitLod", "OpImageSampleProjDrefExplicitLod",
  "OpImageFetch", "OpImageGather", "OpImageDrefGather", "OpImageRead",
  "OpImageWrite", "OpImage", "OpImageQueryFormat", "OpImageQueryOrder",
  "OpImageQuerySizeLod", "OpImageQuerySize", "OpImageQueryLod",
  "OpImageQueryLevels", "OpImageQuerySamples",
  "OpImageSparseSampleImplicitLod", "OpImageSparseSampleExplicitLod",
  "OpImageSparseSampleDrefImplicitLod",
  "OpImageSparseSampleDrefExplicitLod",
  "OpImageSparseSampleProjImplicitLod",
  "OpImageSparseSampleProjExplicitLod",
  "OpImageSparseSampleProjDrefImplicitLod",
  "OpImageSparseSampleProjDrefExplicitLod", "OpImageSparseFetch",
  "OpImageSparseGather", "OpImageSparseDrefGather",
  "OpImageSparseTexelsResident", "OpImageSparseRead", "OpConvertFToU",
  "OpConvertFToS", "OpConvertSToF", "OpConvertUToF", "OpUConvert",
  "OpSConvert", "OpFConvert", "OpQuantizeToF16", "OpConvertPtrToU",
  "OpSatConvertSToU", "OpSatConvertUToS", "OpConvertUToPtr",
  "OpPtrCastToGeneric", "OpGenericCastToPtr", "OpGenericCastToPtrExplicit",
  "OpBitcast", "OpVectorExtractDynamic", "OpVectorInsertDynamic",
  "OpVectorShuffle", "OpCompositeConstruct", "OpCompositeExtract",
  "OpCompositeInsert", "OpCopyObject", "OpTranspose", "OpSNegate",
  "OpFNegate", "OpIAdd", "OpFAdd", "OpISub", "OpFSub", "OpIMul", "OpFMul",
  "OpUDiv", "OpSDiv", "OpFDiv", "OpUMod", "OpSRem", "OpSMod", "OpFRem",
  "OpFMod", "OpVectorTimesScalar", "OpMatrixTimesScalar",
  "OpVectorTimesMatrix", "OpMatrixTimesVector", "OpMatrixTimesMatrix",
  "OpOuterProduct", "OpDot", "OpIAddCarry", "OpISubBorrow",
  "OpUMulExtended", "OpSMulExtended", "OpShiftRightLogical",
  "OpShiftRightArithmetic", "OpShiftLeftLogical", "OpBitwiseOr",
  "OpBitwiseXor", "OpBitwiseAnd", "OpNot", "OpBitFieldInsert",
  "OpBitFieldSExtract", "OpBitFieldUExtract", "OpBitReverse", "OpBitCount",
  "OpAny", "OpAll", "OpIsNan", "OpIsInf", "OpIsFinite", "OpIsNormal",
  "OpSignBitSet", "OpLessOrGreater", "OpOrdered", "OpUnordered",
  "OpLogicalEqual", "OpLogicalNotEqual", "OpLogicalOr", "OpLogicalAnd",
  "OpLogicalNot", "OpSelect", "OpIEqual", "OpINotEqual", "OpUGreaterThan",
  "OpSGreaterThan", "OpUGreaterThanEqual", "OpSGreaterThanEqual",
  "OpULessThan", "OpSLessThan", "OpULessThanEqual", "OpSLessThanEqual",
  "OpFOrdEqual", "OpFUnordEqual", "OpFOrdNotEqual", "OpFUnordNotEqual",
  "OpFOrdLessThan", "OpFUnordLessThan", "OpFOrdGreaterThan",
  "OpFUnordGreaterThan", "OpFOrdLessThanEqual", "OpFUnordLessThanEqual",
  "OpFOrdGreaterThanEqual", "OpFUnordGreaterThanEqual", "OpDPdx", "OpDPdy",
  "OpFwidth", "OpDPdxFine", "OpDPdyFine", "OpFwidthFine", "OpDPdxCoarse",
  "OpDPdyCoarse", "OpFwidthCoarse", "OpPhi", "OpLoopMerge",
  "OpSelectionMerge", "OpLabel", "OpBranch", "OpBranchConditional",
  "OpSwitch", "OpReturn", "OpReturnValue", "OpUnreachable",
  "OpLifetimeStart", "OpLifetimeStop", "OpAtomicLoad", "OpAtomicStore",
  "OpAtomicExchange", "OpAtomicCompareExchangeWeak", "OpAtomicIIncrement",
  "OpAtomicIDecrement", "OpAtomicIAdd", "OpAtomicISub", "OpAtomicSMin",
  "OpAtomicUMin", "OpAtomicSMax", "OpAtomicUMax", "OpAtomicAnd",
  "OpAtomicOr", "OpAtomicXor", "OpAtomicFlagTestAndSet",
  "OpAtomicFlagClear", "OpEmitStreamVertex", "OpEndStreamPrimitive",
  "OpControlBarrier", "OpMemoryBarrier", "OpGroupAsyncCopy",
  "OpGroupWaitEvents", "OpGroupAll", "OpGroupAny", "OpGroupBroadcast",
  "OpGroupIAdd", "OpGroupFAdd", "OpGroupFMin", "OpGroupUMin",
  "OpGroupSMin", "OpGroupFMax", "OpGroupUMax", "OpGroupSMax",
  "OpSubgroupBallotKHR", "OpSubgroupFirstInvocationKHR",
  "OpSubgroupReadInvocationKHR", "OpGroupIAddNonUniformAMD",
  "OpGroupFAddNonUniformAMD", "OpGroupFMinNonUniformAMD",
  "OpGroupUMinNonUniformAMD", "OpGroupSMinNonUniformAMD",
  "OpGroupFMaxNonUniformAMD", "OpGroupUMaxNonUniformAMD",
  "OpGroupSMaxNonUniformAMD", "OpEnqueueMarker",
  "OpGetKernelNDrangeSubGroupCount", "OpGetKernelNDrangeMaxSubGroupSize",
  "OpGetKernelWorkGroupSize", "OpGetKernelPreferredWorkGroupSizeMultiple",
  "OpRetainEvent", "OpReleaseEvent", "OpCreateUserEvent", "OpIsValidEvent",
  "OpSetUserEventStatus", "OpCaptureEventProfilingInfo",
  "OpGetDefaultQueue", "OpBuildNDRange", "OpReadPipe", "OpWritePipe",
  "OpReservedReadPipe", "OpReservedWritePipe", "OpReserveReadPipePackets",
  "OpReserveWritePipePackets", "OpCommitReadPipe", "OpCommitWritePipe",
  "OpIsValidReserveId", "OpGetNumPipePackets", "OpGetMaxPipePackets",
  "OpGroupReserveReadPipePackets", "OpGroupReserveWritePipePackets",
  "OpGroupCommitReadPipe", "OpGroupCommitWritePipe", "E_Unknown", "E_ESSL",
  "E_GLSL", "E_OpenCL_C", "E_OpenCL_CPP", "E_HLSL", "E_Vertex",
  "E_TessellationControl", "E_TessellationEvaluation", "E_Geometry",
  "E_Fragment", "E_GLCompute", "E_Kernel", "E_Logical", "E_Physical32",
  "E_Physical64", "E_Simple", "E_GLSL450", "E_OpenCL", "E_Invocations",
  "E_SpacingEqual", "E_SpacingFractionalEven", "E_SpacingFractionalOdd",
  "E_VertexOrderCw", "E_VertexOrderCcw", "E_PixelCenterInteger",
  "E_OriginUpperLeft", "E_OriginLowerLeft", "E_EarlyFragmentTests",
  "E_PointMode", "E_Xfb", "E_DepthReplacing", "E_DepthGreater",
  "E_DepthLess", "E_DepthUnchanged", "E_LocalSize", "E_LocalSizeHint",
  "E_InputPoints", "E_InputLines", "E_InputLinesAdjacency", "E_Triangles",
  "E_InputTrianglesAdjacency", "E_Quads", "E_Isolines", "E_OutputVertices",
  "E_OutputPoints", "E_OutputLineStrip", "E_OutputTriangleStrip",
  "E_VecTypeHint", "E_ContractionOff", "E_Initializer", "E_Finalizer",
  "E_SubgroupSize", "E_SubgroupsPerWorkgroup", "E_SubgroupsPerWorkgroupId",
  "E_LocalSizeId", "E_LocalSizeHintId", "E_PostDepthCoverage",
  "E_StencilRefReplacingEXT", "E_UniformConstant", "E_Input", "E_Uniform",
  "E_Output", "E_Workgroup", "E_CrossWorkgroup", "E_Private", "E_Function",
  "E_Generic", "E_PushConstant", "E_AtomicCounter", "E_Image",
  "E_StorageBuffer", "E_1D", "E_2D", "E_3D", "E_Cube", "E_Rect",
  "E_Buffer", "E_SubpassData", "E_None", "E_ClampToEdge", "E_Clamp",
  "E_Repeat", "E_RepeatMirrored", "E_Nearest", "E_Linear", "E_Rgba32f",
  "E_Rgba16f", "E_R32f", "E_Rgba8", "E_Rgba8Snorm", "E_Rg32f", "E_Rg16f",
  "E_R11fG11fB10f", "E_R16f", "E_Rgba16", "E_Rgb10A2", "E_Rg16", "E_Rg8",
  "E_R16", "E_R8", "E_Rgba16Snorm", "E_Rg16Snorm", "E_Rg8Snorm",
  "E_R16Snorm", "E_R8Snorm", "E_Rgba32i", "E_Rgba16i", "E_Rgba8i",
  "E_R32i", "E_Rg32i", "E_Rg16i", "E_Rg8i", "E_R16i", "E_R8i",
  "E_Rgba32ui", "E_Rgba16ui", "E_Rgba8ui", "E_R32ui", "E_Rgb10a2ui",
  "E_Rg32ui", "E_Rg16ui", "E_Rg8ui", "E_R16ui", "E_R8ui", "E_R", "E_A",
  "E_RG", "E_RA", "E_RGB", "E_RGBA", "E_BGRA", "E_ARGB", "E_Intensity",
  "E_Luminance", "E_Rx", "E_RGx", "E_RGBx", "E_Depth", "E_DepthStencil",
  "E_sRGB", "E_sRGBx", "E_sRGBA", "E_sBGRA", "E_ABGR", "E_SnormInt8",
  "E_SnormInt16", "E_UnormInt8", "E_UnormInt16", "E_UnormShort565",
  "E_UnormShort555", "E_UnormInt101010", "E_SignedInt8", "E_SignedInt16",
  "E_SignedInt32", "E_UnsignedInt8", "E_UnsignedInt16", "E_UnsignedInt32",
  "E_HalfFloat", "E_Float", "E_UnormInt24", "E_UnormInt101010_2", "E_Bias",
  "E_Lod", "E_Grad", "E_ConstOffset", "E_Offset", "E_ConstOffsets",
  "E_Sample", "E_MinLod", "E_NotNaN", "E_NotInf", "E_NSZ", "E_AllowRecip",
  "E_Fast", "E_RTE", "E_RTZ", "E_RTP", "E_RTN", "E_Export", "E_Import",
  "E_ReadOnly", "E_WriteOnly", "E_ReadWrite", "E_Zext", "E_Sext",
  "E_ByVal", "E_Sret", "E_NoAlias", "E_NoCapture", "E_NoWrite",
  "E_NoReadWrite", "E_RelaxedPrecision", "E_SpecId", "E_Block",
  "E_BufferBlock", "E_RowMajor", "E_ColMajor", "E_ArrayStride",
  "E_MatrixStride", "E_GLSLShared", "E_GLSLPacked", "E_CPacked",
  "E_BuiltIn", "E_NoPerspective", "E_Flat", "E_Patch", "E_Centroid",
  "E_Invariant", "E_Restrict", "E_Aliased", "E_Volatile", "E_Constant",
  "E_Coherent", "E_NonWritable", "E_NonReadable", "E_SaturatedConversion",
  "E_Stream", "E_Location", "E_Component", "E_Index", "E_Binding",
  "E_DescriptorSet", "E_XfbBuffer", "E_XfbStride", "E_FuncParamAttr",
  "E_FPRoundingMode", "E_FPFastMathMode", "E_LinkageAttributes",
  "E_NoContraction", "E_InputAttachmentIndex", "E_Alignment",
  "E_MaxByteOffset", "E_AlignmentId", "E_MaxByteOffsetId",
  "E_ExplicitInterpAMD", "E_OverrideCoverageNV", "E_PassthroughNV",
  "E_ViewportRelativeNV", "E_SecondaryViewportRelativeNV",
  "E_NonUniformEXT", "E_HlslCounterBufferGOOGLE", "E_HlslSemanticGOOGLE",
  "E_Position", "E_PointSize", "E_ClipDistance", "E_CullDistance",
  "E_VertexId", "E_InstanceId", "E_PrimitiveId", "E_InvocationId",
  "E_Layer", "E_ViewportIndex", "E_TessLevelOuter", "E_TessLevelInner",
  "E_TessCoord", "E_PatchVertices", "E_FragCoord", "E_PointCoord",
  "E_FrontFacing", "E_SampleId", "E_SamplePosition", "E_SampleMask",
  "E_FragDepth", "E_HelperInvocation", "E_NumWorkgroups",
  "E_WorkgroupSize", "E_WorkgroupId", "E_LocalInvocationId",
  "E_GlobalInvocationId", "E_LocalInvocationIndex", "E_WorkDim",
  "E_GlobalSize", "E_EnqueuedWorkgroupSize", "E_GlobalOffset",
  "E_GlobalLinearId", "E_SubgroupMaxSize", "E_NumSubgroups",
  "E_NumEnqueuedSubgroups", "E_SubgroupId", "E_SubgroupLocalInvocationId",
  "E_VertexIndex", "E_InstanceIndex", "E_SubgroupEqMask",
  "E_SubgroupGeMask", "E_SubgroupGtMask", "E_SubgroupLeMask",
  "E_SubgroupLtMask", "E_SubgroupEqMaskKHR", "E_SubgroupGeMaskKHR",
  "E_SubgroupGtMaskKHR", "E_SubgroupLeMaskKHR", "E_SubgroupLtMaskKHR",
  "E_BaseVertex", "E_BaseInstance", "E_DrawIndex", "E_DeviceIndex",
  "E_ViewIndex", "E_BaryCoordNoPerspAMD", "E_BaryCoordNoPerspCentroidAMD",
  "E_BaryCoordNoPerspSampleAMD", "E_BaryCoordSmoothAMD",
  "E_BaryCoordSmoothCentroidAMD", "E_BaryCoordSmoothSampleAMD",
  "E_BaryCoordPullModelAMD", "E_FragStencilRefEXT", "E_ViewportMaskNV",
  "E_SecondaryPositionNV", "E_SecondaryViewportMaskNV",
  "E_PositionPerViewNV", "E_ViewportMaskPerViewNV", "E_FullyCoveredEXT",
  "E_Flatten", "E_DontFlatten", "E_Unroll", "E_DontUnroll",
  "E_DependencyInfinite", "E_DependencyLength", "E_Inline", "E_DontInline",
  "E_Pure", "E_Const", "E_Acquire", "E_Release", "E_AcquireRelease",
  "E_SequentiallyConsistent", "E_UniformMemory", "E_SubgroupMemory",
  "E_WorkgroupMemory", "E_CrossWorkgroupMemory", "E_AtomicCounterMemory",
  "E_ImageMemory", "E_Aligned", "E_Nontemporal", "E_CrossDevice",
  "E_Device", "E_Subgroup", "E_Invocation", "E_Reduce", "E_InclusiveScan",
  "E_ExclusiveScan", "E_ClusteredReduce", "E_PartitionedReduceNV",
  "E_PartitionedInclusiveScanNV", "E_PartitionedExclusiveScanNV",
  "E_NoWait", "E_WaitKernel", "E_WaitWorkGroup", "E_CmdExecTime",
  "E_Matrix", "E_Shader", "E_Tessellation", "E_Addresses", "E_Linkage",
  "E_Vector16", "E_Float16Buffer", "E_Float16", "E_Float64", "E_Int64",
  "E_Int64Atomics", "E_ImageBasic", "E_ImageReadWrite", "E_ImageMipmap",
  "E_Pipes", "E_Groups", "E_DeviceEnqueue", "E_LiteralSampler",
  "E_AtomicStorage", "E_Int16", "E_TessellationPointSize",
  "E_GeometryPointSize", "E_ImageGatherExtended",
  "E_StorageImageMultisample", "E_UniformBufferArrayDynamicIndexing",
  "E_SampledImageArrayDynamicIndexing",
  "E_StorageBufferArrayDynamicIndexing",
  "E_StorageImageArrayDynamicIndexing", "E_ImageCubeArray",
  "E_SampleRateShading", "E_ImageRect", "E_SampledRect",
  "E_GenericPointer", "E_Int8", "E_InputAttachment", "E_SparseResidency",
  "E_Sampled1D", "E_Image1D", "E_SampledCubeArray", "E_SampledBuffer",
  "E_ImageBuffer", "E_ImageMSArray", "E_StorageImageExtendedFormats",
  "E_ImageQuery", "E_DerivativeControl", "E_InterpolationFunction",
  "E_TransformFeedback", "E_GeometryStreams",
  "E_StorageImageReadWithoutFormat", "E_StorageImageWriteWithoutFormat",
  "E_MultiViewport", "E_SubgroupDispatch", "E_NamedBarrier",
  "E_PipeStorage", "E_GroupNonUniform", "E_GroupNonUniformVote",
  "E_GroupNonUniformArithmetic", "E_GroupNonUniformBallot",
  "E_GroupNonUniformShuffle", "E_GroupNonUniformShuffleRelative",
  "E_GroupNonUniformClustered", "E_GroupNonUniformQuad",
  "E_SubgroupBallotKHR", "E_DrawParameters", "E_SubgroupVoteKHR",
  "E_StorageBuffer16BitAccess", "E_StorageUniformBufferBlock16",
  "E_UniformAndStorageBuffer16BitAccess", "E_StorageUniform16",
  "E_StoragePushConstant16", "E_StorageInputOutput16", "E_DeviceGroup",
  "E_MultiView", "E_VariablePointersStorageBuffer", "E_VariablePointers",
  "E_AtomicStorageOps", "E_SampleMaskPostDepthCoverage",
  "E_Float16ImageAMD", "E_ImageGatherBiasLodAMD", "E_FragmentMaskAMD",
  "E_StencilExportEXT", "E_ImageReadWriteLodAMD",
  "E_SampleMaskOverrideCoverageNV", "E_GeometryShaderPassthroughNV",
  "E_ShaderViewportIndexLayerEXT", "E_ShaderViewportIndexLayerNV",
  "E_ShaderViewportMaskNV", "E_ShaderStereoViewNV",
  "E_PerViewAttributesNV", "E_FragmentFullyCoveredEXT",
  "E_ShaderNonUniformEXT", "E_RuntimeDescriptorArrayEXT",
  "E_InputAttachmentArrayDynamicIndexingEXT",
  "E_UniformTexelBufferArrayDynamicIndexingEXT",
  "E_StorageTexelBufferArrayDynamicIndexingEXT",
  "E_UniformBufferArrayNonUniformIndexingEXT",
  "E_SampledImageArrayNonUniformIndexingEXT",
  "E_StorageBufferArrayNonUniformIndexingEXT",
  "E_StorageImageArrayNonUniformIndexingEXT",
  "E_InputAttachmentArrayNonUniformIndexingEXT",
  "E_UniformTexelBufferArrayNonUniformIndexingEXT",
  "E_StorageTexelBufferArrayNonUniformIndexingEXT",
  "E_SubgroupShuffleINTEL", "E_SubgroupBufferBlockIOINTEL",
  "E_SubgroupImageBlockIOINTEL", "E_GroupNonUniformPartitionedNV",
  "E_Round", "E_RoundEven", "E_Trunc", "E_FAbs", "E_SAbs", "E_FSign",
  "E_SSign", "E_Floor", "E_Ceil", "E_Fract", "E_Radians", "E_Degrees",
  "E_Sin", "E_Cos", "E_Tan", "E_Asin", "E_Acos", "E_Atan", "E_Sinh",
  "E_Cosh", "E_Tanh", "E_Asinh", "E_Acosh", "E_Atanh", "E_Atan2", "E_Pow",
  "E_Exp", "E_Log", "E_Exp2", "E_Log2", "E_Sqrt", "E_InverseSqrt",
  "E_Determinant", "E_MatrixInverse", "E_Modf", "E_ModfStruct", "E_FMin",
  "E_UMin", "E_SMin", "E_FMax", "E_UMax", "E_SMax", "E_FClamp", "E_UClamp",
  "E_SClamp", "E_FMix", "E_Step", "E_SmoothStep", "E_Fma", "E_Frexp",
  "E_FrexpStruct", "E_Ldexp", "E_PackSnorm4x8", "E_PackUnorm4x8",
  "E_PackSnorm2x16", "E_PackUnorm2x16", "E_PackHalf2x16",
  "E_PackDouble2x32", "E_UnpackSnorm2x16", "E_UnpackUnorm2x16",
  "E_UnpackHalf2x16", "E_UnpackSnorm4x8", "E_UnpackUnorm4x8",
  "E_UnpackDouble2x32", "E_Length", "E_Distance", "E_Cross", "E_Normalize",
  "E_FaceForward", "E_Reflect", "E_Refract", "E_FindILsb", "E_FindSMsb",
  "E_FindUMsb", "E_InterpolateAtCentroid", "E_InterpolateAtSample",
  "E_InterpolateAtOffset", "E_NMin", "E_NMax", "E_NClamp", "$accept",
  "program", "header", "header_subentry_list", "header_subentry", "body",
  "instruction_list", "instruction", "argument_list", "argument",
  "identifier_reference", "number_reference", "header_name",
  "io_keyword_reference", "uniform_keyword_reference", "opcode", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   627,   628,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,   646,   647,   648,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,   683,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,   709,   710,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,   724,
     725,   726,   727,   728,   729,   730,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   741,   742,   743,   744,
     745,   746,   747,   748,   749,   750,   751,   752,   753,   754,
     755,   756,   757,   758,   759,   760,   761,   762,   763,   764,
     765,   766,   767,   768,   769,   770,   771,   772,   773,   774,
     775,   776,   777,   778,   779,   780,   781,   782,   783,   784,
     785,   786,   787,   788,   789,   790,   791,   792,   793,   794,
     795,   796,   797,   798,   799,   800,   801,   802,   803,   804,
     805,   806,   807,   808,   809,   810,   811,   812,   813,   814,
     815,   816,   817,   818,   819,   820,   821,   822,   823,   824,
     825,   826,   827,   828,   829,   830,   831,   832,   833,   834,
     835,   836,   837,   838,   839,   840,   841,   842,   843,   844,
     845,   846,   847,   848,   849,   850,   851,   852,   853,   854,
     855,   856,   857,   858,   859,   860,   861,   862,   863,   864,
     865,   866,   867,   868,   869,   870,   871,   872,   873,   874,
     875,   876,   877,   878,   879,   880,   881,   882,   883,   884,
     885,   886,   887,   888,   889,   890,   891,   892,   893,   894,
     895,   896,   897,   898,   899,   900,   901,   902,   903,   904,
     905,   906,   907,   908,   909,   910,   911,   912,   913,   914,
     915,   916,   917,   918,   919,   920,   921,   922,   923,   924,
     925,   926,   927,   928,   929,   930,   931,   932,   933,   934,
     935,   936,   937,   938,   939,   940,   941,   942,   943,   944,
     945,   946,   947,   948,   949,   950,   951,   952,   953,   954,
     955,   956,   957,   958,   959,   960,   961,   962,   963,   964,
     965,   966,   967,   968,   969,   970,   971,   972,   973,   974,
     975,   976,   977,   978,   979,   980,   981,   982,   983,   984,
     985,   986,   987,   988,   989,   990,   991,   992,   993,   994,
     995,   996,   997,   998,   999,  1000,  1001,  1002,  1003,  1004,
    1005,  1006,  1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,
    1015,  1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,
    1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,
    1035,  1036,  1037,  1038,  1039,  1040,  1041,  1042,  1043,  1044,
    1045,  1046,  1047,  1048,  1049,  1050,  1051,  1052,  1053,  1054,
    1055,  1056,  1057,  1058,  1059,  1060,  1061,  1062,  1063,  1064,
    1065,  1066,  1067,  1068,  1069,  1070,  1071,  1072,  1073,  1074,
    1075,  1076,  1077,  1078,  1079,  1080,  1081,  1082,  1083,  1084,
    1085,  1086,  1087,  1088,  1089,  1090,  1091,  1092,  1093,  1094,
    1095,  1096,  1097,  1098,  1099,  1100,  1101
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   847,   848,   848,   849,   850,   850,   851,   851,   852,
     852,   853,   853,   854,   854,   855,   855,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   857,   858,   859,   860,   861,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     4,     2,     1,     4,     6,     1,
       2,     3,     1,     2,     4,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   555,     0,   560,   561,   562,   563,   564,   565,   566,
     567,   568,   569,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
     587,   588,   589,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
     627,   628,   629,   630,   631,   632,   633,   634,   635,   636,
     637,   638,   639,   640,   641,   642,   643,   644,   645,   646,
     647,   648,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,   683,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,   701,   702,   703,   704,   705,   706,
     707,   708,   709,   710,   711,   712,   713,   714,   715,   716,
     717,   718,   719,   720,   721,   722,   723,   724,   725,   726,
     727,   728,   729,   730,   731,   732,   733,   734,   735,   736,
     737,   738,   739,   740,   741,   742,   743,   744,   745,   746,
     747,   748,   749,   750,   751,   752,   753,   754,   755,   756,
     757,   758,   759,   760,   761,   762,   763,   764,   765,   766,
     767,   768,   769,   770,   771,   772,   773,   774,   775,   776,
     777,   778,   779,   780,   781,   782,   783,   784,   785,   786,
     787,   788,   789,   790,   791,   792,   793,   794,   795,   796,
     797,   798,   799,   800,   801,   802,   803,   804,   805,   806,
     807,   808,   809,   810,   811,   812,   813,   814,   815,   816,
     817,   818,   819,   820,   821,   822,   823,   824,   825,   826,
     827,   828,   829,   830,   831,   832,   833,   834,   835,   836,
     837,   838,   839,   840,   841,   842,   843,   844,   845,   846,
     847,   848,   849,   850,   851,   852,   853,   854,   855,   856,
     857,   858,     0,     0,     3,     9,    12,     0,    16,   557,
       0,     1,     2,    10,     0,    13,     0,    11,    16,   556,
     553,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,    15,   554,   552,   558,
     559,     4,     6,     0,     0,    14,     5,     0,     0,     0,
       0,     7,     0,     0,     8
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   302,   303,   861,   862,   304,   305,   306,   315,   856,
     307,   858,   310,   863,   864,   308
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -862
static const yytype_int16 yypact[] =
{
     843,  -862,    -4,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,     8,  1150,  -862,     6,  -862,     2,  -862,  -862,
       9,  -862,  -862,  1150,  1449,    -5,    -7,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,    -7,  -862,    10,     5,    -5,  -862,    10,     5,    11,
      10,  -862,    10,    13,  -862
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -862,  -862,  -862,  -862,  -848,  -286,  -862,  -295,  -299,  -862,
     -21,  -861,  -862,  -862,  -862,  -294
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
       1,   319,   320,   868,   859,   860,   309,   870,   311,   313,
     314,   319,   316,   866,   871,     1,   874,   312,   317,   865,
     318,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   857,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,   556,   557,   558,   559,   560,   561,   562,   563,
     564,   565,   566,   567,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,   587,   588,   589,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,   627,   628,   629,   630,   631,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   642,   643,
     644,   645,   646,   647,   648,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,   679,   680,   681,   682,   683,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,   701,   702,   703,
     704,   705,   706,   707,   708,   709,   710,   711,   712,   713,
     714,   715,   716,   717,   718,   719,   720,   721,   722,   723,
     724,   725,   726,   727,   728,   729,   730,   731,   732,   733,
     734,   735,   736,   737,   738,   739,   740,   741,   742,   743,
     744,   745,   746,   747,   748,   749,   750,   751,   752,   753,
     754,   755,   756,   757,   758,   759,   760,   761,   762,   763,
     764,   765,   766,   767,   768,   769,   770,   771,   772,   773,
     774,   775,   776,   777,   778,   779,   780,   781,   782,   783,
     784,   785,   786,   787,   788,   789,   790,   791,   792,   793,
     794,   795,   796,   797,   798,   799,   800,   801,   802,   803,
     804,   805,   806,   807,   808,   809,   810,   811,   812,   813,
     814,   815,   816,   817,   818,   819,   820,   821,   822,   823,
     824,   825,   826,   827,   828,   829,   830,   831,   832,   833,
     834,   835,   836,   837,   838,   839,   840,   841,   842,   843,
     844,   845,   846,   847,   848,   849,   850,   851,   852,   853,
     854,   855,   867,     0,   857,     0,   869,     0,     1,   872,
       0,   873,     2,     0,     0,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,     1,     0,     0,     0,     0,
       0,     0,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301
};

static const yytype_int16 yycheck[] =
{
       5,     6,     7,   864,    11,    12,    10,   868,     0,     3,
       8,     6,     3,   861,     3,     5,     3,   303,   313,   318,
     314,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   315,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   627,   628,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,   646,   647,   648,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,   683,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,   709,   710,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,   724,
     725,   726,   727,   728,   729,   730,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   741,   742,   743,   744,
     745,   746,   747,   748,   749,   750,   751,   752,   753,   754,
     755,   756,   757,   758,   759,   760,   761,   762,   763,   764,
     765,   766,   767,   768,   769,   770,   771,   772,   773,   774,
     775,   776,   777,   778,   779,   780,   781,   782,   783,   784,
     785,   786,   787,   788,   789,   790,   791,   792,   793,   794,
     795,   796,   797,   798,   799,   800,   801,   802,   803,   804,
     805,   806,   807,   808,   809,   810,   811,   812,   813,   814,
     815,   816,   817,   818,   819,   820,   821,   822,   823,   824,
     825,   826,   827,   828,   829,   830,   831,   832,   833,   834,
     835,   836,   837,   838,   839,   840,   841,   842,   843,   844,
     845,   846,   863,    -1,   865,    -1,   867,    -1,     5,   870,
      -1,   872,     9,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     5,     9,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   848,   849,   852,   853,   854,   857,   862,    10,
     859,     0,   852,     3,     8,   855,     3,   854,   862,     6,
       7,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,   556,   557,   558,   559,   560,
     561,   562,   563,   564,   565,   566,   567,   568,   569,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,   587,   588,   589,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
     611,   612,   613,   614,   615,   616,   617,   618,   619,   620,
     621,   622,   623,   624,   625,   626,   627,   628,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,   646,   647,   648,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,   683,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
     701,   702,   703,   704,   705,   706,   707,   708,   709,   710,
     711,   712,   713,   714,   715,   716,   717,   718,   719,   720,
     721,   722,   723,   724,   725,   726,   727,   728,   729,   730,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
     741,   742,   743,   744,   745,   746,   747,   748,   749,   750,
     751,   752,   753,   754,   755,   756,   757,   758,   759,   760,
     761,   762,   763,   764,   765,   766,   767,   768,   769,   770,
     771,   772,   773,   774,   775,   776,   777,   778,   779,   780,
     781,   782,   783,   784,   785,   786,   787,   788,   789,   790,
     791,   792,   793,   794,   795,   796,   797,   798,   799,   800,
     801,   802,   803,   804,   805,   806,   807,   808,   809,   810,
     811,   812,   813,   814,   815,   816,   817,   818,   819,   820,
     821,   822,   823,   824,   825,   826,   827,   828,   829,   830,
     831,   832,   833,   834,   835,   836,   837,   838,   839,   840,
     841,   842,   843,   844,   845,   846,   856,   857,   858,    11,
      12,   850,   851,   860,   861,   855,   851,   857,   858,   857,
     858,     3,   857,   857,     3
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 862 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    {;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 862 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    {;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 864 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
          (yyval) = (yyvsp[(2) - (4)]); 
          (yyval)->next = (yyvsp[(3) - (4)]); 
          register_header_definition((yyval)); 
      ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 871 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
          register_header_entry((yyvsp[(2) - (2)]));;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 873 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    {register_header_entry((yyvsp[(1) - (1)])); 
      ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 877 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
          (yyval) = (yyvsp[(1) - (4)]); 
          (yyvsp[(1) - (4)])->next = (yyvsp[(2) - (4)]); 
          (yyvsp[(2) - (4)])->next = (yyvsp[(3) - (4)]); 
          add_future_identifier_definition((yyvsp[(3) - (4)])->string); 
      ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 884 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
          (yyval) = (yyvsp[(1) - (6)]); 
          (yyvsp[(1) - (6)])->next = (yyvsp[(2) - (6)]); 
          (yyvsp[(2) - (6)])->next = (yyvsp[(3) - (6)]); 
          (yyvsp[(3) - (6)])->next = (yyvsp[(4) - (6)]); 
          (yyvsp[(4) - (6)])->next = (yyvsp[(5) - (6)]); 
          add_future_identifier_definition((yyvsp[(5) - (6)])->string); 
      ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 893 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    {;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 895 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    {;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 897 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    {;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 899 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    {;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 901 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
          (yyvsp[(1) - (2)])->next = (yyvsp[(2) - (2)]); 
          register_identifier_definition((yyvsp[(1) - (2)])); 
          // print_value_chain($2); 
          // printf("\n"); 
      ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 907 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
          (yyvsp[(3) - (4)])->next = (yyvsp[(4) - (4)]); 
          int ind = result_indices[(yyvsp[(3) - (4)])->operation_number]; 
          if(put_into_chain(ind, (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)])) <= ind){ 
              printf("Not enough arguments in assignment at line %d\n", yylineno-1); 
              exit(-1); 
          } 
          register_identifier_definition((yyvsp[(3) - (4)])); 
      ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 917 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
          (yyval) = (yyvsp[(2) - (2)]); 
          (yyval)->next = (yyvsp[(1) - (2)]); 
      ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 921 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { (yyval) = NULL;;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 925 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Unknown\n"); 
              (yyval) = construct_value_number(0, NULL); 
          ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 930 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ESSL\n"); 
              (yyval) = construct_value_number(1, NULL); 
          ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 935 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: GLSL\n"); 
              (yyval) = construct_value_number(2, NULL); 
          ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 940 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: OpenCL_C\n"); 
              (yyval) = construct_value_number(3, NULL); 
          ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 945 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: OpenCL_CPP\n"); 
              (yyval) = construct_value_number(4, NULL); 
          ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 950 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: HLSL\n"); 
              (yyval) = construct_value_number(5, NULL); 
          ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 955 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Vertex\n"); 
              (yyval) = construct_value_number(0, NULL); 
          ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 960 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: TessellationControl\n"); 
              (yyval) = construct_value_number(1, NULL); 
          ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 965 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: TessellationEvaluation\n"); 
              (yyval) = construct_value_number(2, NULL); 
          ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 970 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Geometry\n"); 
              (yyval) = construct_value_number(2, NULL); 
          ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 975 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Fragment\n"); 
              (yyval) = construct_value_number(4, NULL); 
          ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 980 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: GLCompute\n"); 
              (yyval) = construct_value_number(5, NULL); 
          ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 985 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Kernel\n"); 
              (yyval) = construct_value_number(6, NULL); 
          ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 990 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Logical\n"); 
              (yyval) = construct_value_number(0, NULL); 
          ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 995 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Physical32\n"); 
              (yyval) = construct_value_number(1, NULL); 
          ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 1000 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Physical64\n"); 
              (yyval) = construct_value_number(2, NULL); 
          ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 1005 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Simple\n"); 
              (yyval) = construct_value_number(0, NULL); 
          ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 1010 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: GLSL450\n"); 
              (yyval) = construct_value_number(1, NULL); 
          ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 1015 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: OpenCL\n"); 
              (yyval) = construct_value_number(2, NULL); 
          ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 1020 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Invocations\n"); 
              (yyval) = construct_value_number(0, NULL); 
          ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 1025 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SpacingEqual\n"); 
              (yyval) = construct_value_number(1, NULL); 
          ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 1030 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SpacingFractionalEven\n"); 
              (yyval) = construct_value_number(2, NULL); 
          ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 1035 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SpacingFractionalOdd\n"); 
              (yyval) = construct_value_number(3, NULL); 
          ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 1040 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: VertexOrderCw\n"); 
              (yyval) = construct_value_number(4, NULL); 
          ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 1045 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: VertexOrderCcw\n"); 
              (yyval) = construct_value_number(5, NULL); 
          ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 1050 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: PixelCenterInteger\n"); 
              (yyval) = construct_value_number(6, NULL); 
          ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 1055 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: OriginUpperLeft\n"); 
              (yyval) = construct_value_number(7, NULL); 
          ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 1060 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: OriginLowerLeft\n"); 
              (yyval) = construct_value_number(8, NULL); 
          ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 1065 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: EarlyFragmentTests\n"); 
              (yyval) = construct_value_number(9, NULL); 
          ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 1070 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: PointMode\n"); 
              (yyval) = construct_value_number(10, NULL); 
          ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 1075 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Xfb\n"); 
              (yyval) = construct_value_number(11, NULL); 
          ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 1080 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: DepthReplacing\n"); 
              (yyval) = construct_value_number(12, NULL); 
          ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 1085 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: DepthGreater\n"); 
              (yyval) = construct_value_number(14, NULL); 
          ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 1090 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: DepthLess\n"); 
              (yyval) = construct_value_number(15, NULL); 
          ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 1095 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: DepthUnchanged\n"); 
              (yyval) = construct_value_number(16, NULL); 
          ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 1100 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: LocalSize\n"); 
              (yyval) = construct_value_number(17, NULL); 
          ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 1105 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: LocalSizeHint\n"); 
              (yyval) = construct_value_number(18, NULL); 
          ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 1110 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: InputPoints\n"); 
              (yyval) = construct_value_number(19, NULL); 
          ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 1115 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: InputLines\n"); 
              (yyval) = construct_value_number(20, NULL); 
          ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 1120 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: InputLinesAdjacency\n"); 
              (yyval) = construct_value_number(21, NULL); 
          ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 1125 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Triangles\n"); 
              (yyval) = construct_value_number(22, NULL); 
          ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 1130 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: InputTrianglesAdjacency\n"); 
              (yyval) = construct_value_number(23, NULL); 
          ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 1135 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Quads\n"); 
              (yyval) = construct_value_number(24, NULL); 
          ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 1140 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Isolines\n"); 
              (yyval) = construct_value_number(25, NULL); 
          ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 1145 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: OutputVertices\n"); 
              (yyval) = construct_value_number(26, NULL); 
          ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 1150 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: OutputPoints\n"); 
              (yyval) = construct_value_number(27, NULL); 
          ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 1155 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: OutputLineStrip\n"); 
              (yyval) = construct_value_number(28, NULL); 
          ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 1160 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: OutputTriangleStrip\n"); 
              (yyval) = construct_value_number(29, NULL); 
          ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 1165 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: VecTypeHint\n"); 
              (yyval) = construct_value_number(30, NULL); 
          ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 1170 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ContractionOff\n"); 
              (yyval) = construct_value_number(31, NULL); 
          ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 1175 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Initializer\n"); 
              (yyval) = construct_value_number(33, NULL); 
          ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 1180 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Finalizer\n"); 
              (yyval) = construct_value_number(34, NULL); 
          ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 1185 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SubgroupSize\n"); 
              (yyval) = construct_value_number(36, NULL); 
          ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 1190 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SubgroupsPerWorkgroup\n"); 
              (yyval) = construct_value_number(36, NULL); 
          ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 1195 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SubgroupsPerWorkgroupId\n"); 
              (yyval) = construct_value_number(37, NULL); 
          ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 1200 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: LocalSizeId\n"); 
              (yyval) = construct_value_number(38, NULL); 
          ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 1205 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: LocalSizeHintId\n"); 
              (yyval) = construct_value_number(39, NULL); 
          ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 1210 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: PostDepthCoverage\n"); 
              (yyval) = construct_value_number(4446, NULL); 
          ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 1215 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: StencilRefReplacingEXT\n"); 
              (yyval) = construct_value_number(5027, NULL); 
          ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 1220 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: UniformConstant\n"); 
              (yyval) = construct_value_number(0, NULL); 
          ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1225 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Input\n"); 
              (yyval) = construct_value_number(1, NULL); 
          ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1230 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Uniform\n"); 
              (yyval) = construct_value_number(26, NULL); 
          ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1235 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Output\n"); 
              (yyval) = construct_value_number(3, NULL); 
          ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 1240 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Workgroup\n"); 
              (yyval) = construct_value_number(2, NULL); 
          ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 1245 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: CrossWorkgroup\n"); 
              (yyval) = construct_value_number(5, NULL); 
          ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 1250 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Private\n"); 
              (yyval) = construct_value_number(6, NULL); 
          ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 1255 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Function\n"); 
              (yyval) = construct_value_number(7, NULL); 
          ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1260 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Generic\n"); 
              (yyval) = construct_value_number(8, NULL); 
          ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 1265 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: PushConstant\n"); 
              (yyval) = construct_value_number(9, NULL); 
          ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1270 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: AtomicCounter\n"); 
              (yyval) = construct_value_number(10, NULL); 
          ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1275 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Image\n"); 
              (yyval) = construct_value_number(11, NULL); 
          ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1280 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: StorageBuffer\n"); 
              (yyval) = construct_value_number(12, NULL); 
          ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1285 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: 1D\n"); 
              (yyval) = construct_value_number(0, NULL); 
          ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1290 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: 2D\n"); 
              (yyval) = construct_value_number(1, NULL); 
          ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1295 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: 3D\n"); 
              (yyval) = construct_value_number(2, NULL); 
          ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 1300 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Cube\n"); 
              (yyval) = construct_value_number(3, NULL); 
          ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 1305 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Rect\n"); 
              (yyval) = construct_value_number(4, NULL); 
          ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 1310 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Buffer\n"); 
              (yyval) = construct_value_number(5, NULL); 
          ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 1315 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SubpassData\n"); 
              (yyval) = construct_value_number(6, NULL); 
          ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1320 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: None\n"); 
              (yyval) = construct_value_number(0x0, NULL); 
          ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1325 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ClampToEdge\n"); 
              (yyval) = construct_value_number(1, NULL); 
          ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1330 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Clamp\n"); 
              (yyval) = construct_value_number(2, NULL); 
          ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1335 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Repeat\n"); 
              (yyval) = construct_value_number(3, NULL); 
          ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1340 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: RepeatMirrored\n"); 
              (yyval) = construct_value_number(4, NULL); 
          ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1345 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Nearest\n"); 
              (yyval) = construct_value_number(0, NULL); 
          ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1350 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Linear\n"); 
              (yyval) = construct_value_number(1, NULL); 
          ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1355 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Rgba32f\n"); 
              (yyval) = construct_value_number(1, NULL); 
          ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1360 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Rgba16f\n"); 
              (yyval) = construct_value_number(2, NULL); 
          ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1365 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: R32f\n"); 
              (yyval) = construct_value_number(3, NULL); 
          ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 1370 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Rgba8\n"); 
              (yyval) = construct_value_number(4, NULL); 
          ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1375 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Rgba8Snorm\n"); 
              (yyval) = construct_value_number(5, NULL); 
          ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1380 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Rg32f\n"); 
              (yyval) = construct_value_number(6, NULL); 
          ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 1385 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Rg16f\n"); 
              (yyval) = construct_value_number(7, NULL); 
          ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1390 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: R11fG11fB10f\n"); 
              (yyval) = construct_value_number(8, NULL); 
          ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1395 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: R16f\n"); 
              (yyval) = construct_value_number(9, NULL); 
          ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1400 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Rgba16\n"); 
              (yyval) = construct_value_number(10, NULL); 
          ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1405 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Rgb10A2\n"); 
              (yyval) = construct_value_number(11, NULL); 
          ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1410 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Rg16\n"); 
              (yyval) = construct_value_number(12, NULL); 
          ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 1415 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Rg8\n"); 
              (yyval) = construct_value_number(13, NULL); 
          ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 1420 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: R16\n"); 
              (yyval) = construct_value_number(14, NULL); 
          ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 1425 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: R8\n"); 
              (yyval) = construct_value_number(15, NULL); 
          ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 1430 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Rgba16Snorm\n"); 
              (yyval) = construct_value_number(16, NULL); 
          ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 1435 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Rg16Snorm\n"); 
              (yyval) = construct_value_number(17, NULL); 
          ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 1440 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Rg8Snorm\n"); 
              (yyval) = construct_value_number(18, NULL); 
          ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 1445 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: R16Snorm\n"); 
              (yyval) = construct_value_number(19, NULL); 
          ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 1450 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: R8Snorm\n"); 
              (yyval) = construct_value_number(20, NULL); 
          ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 1455 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Rgba32i\n"); 
              (yyval) = construct_value_number(21, NULL); 
          ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 1460 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Rgba16i\n"); 
              (yyval) = construct_value_number(22, NULL); 
          ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1465 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Rgba8i\n"); 
              (yyval) = construct_value_number(23, NULL); 
          ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 1470 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: R32i\n"); 
              (yyval) = construct_value_number(24, NULL); 
          ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 1475 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Rg32i\n"); 
              (yyval) = construct_value_number(25, NULL); 
          ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 1480 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Rg16i\n"); 
              (yyval) = construct_value_number(26, NULL); 
          ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 1485 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Rg8i\n"); 
              (yyval) = construct_value_number(27, NULL); 
          ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 1490 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: R16i\n"); 
              (yyval) = construct_value_number(28, NULL); 
          ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 1495 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: R8i\n"); 
              (yyval) = construct_value_number(29, NULL); 
          ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 1500 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Rgba32ui\n"); 
              (yyval) = construct_value_number(30, NULL); 
          ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 1505 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Rgba16ui\n"); 
              (yyval) = construct_value_number(31, NULL); 
          ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1510 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Rgba8ui\n"); 
              (yyval) = construct_value_number(32, NULL); 
          ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 1515 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: R32ui\n"); 
              (yyval) = construct_value_number(33, NULL); 
          ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 1520 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Rgb10a2ui\n"); 
              (yyval) = construct_value_number(34, NULL); 
          ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1525 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Rg32ui\n"); 
              (yyval) = construct_value_number(35, NULL); 
          ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1530 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Rg16ui\n"); 
              (yyval) = construct_value_number(36, NULL); 
          ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 1535 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Rg8ui\n"); 
              (yyval) = construct_value_number(37, NULL); 
          ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 1540 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: R16ui\n"); 
              (yyval) = construct_value_number(38, NULL); 
          ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1545 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: R8ui\n"); 
              (yyval) = construct_value_number(39, NULL); 
          ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 1550 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: R\n"); 
              (yyval) = construct_value_number(0, NULL); 
          ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1555 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: A\n"); 
              (yyval) = construct_value_number(1, NULL); 
          ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 1560 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: RG\n"); 
              (yyval) = construct_value_number(2, NULL); 
          ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1565 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: RA\n"); 
              (yyval) = construct_value_number(3, NULL); 
          ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1570 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: RGB\n"); 
              (yyval) = construct_value_number(4, NULL); 
          ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1575 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: RGBA\n"); 
              (yyval) = construct_value_number(5, NULL); 
          ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1580 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: BGRA\n"); 
              (yyval) = construct_value_number(6, NULL); 
          ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1585 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ARGB\n"); 
              (yyval) = construct_value_number(7, NULL); 
          ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1590 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Intensity\n"); 
              (yyval) = construct_value_number(8, NULL); 
          ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1595 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Luminance\n"); 
              (yyval) = construct_value_number(9, NULL); 
          ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1600 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Rx\n"); 
              (yyval) = construct_value_number(10, NULL); 
          ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1605 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: RGx\n"); 
              (yyval) = construct_value_number(11, NULL); 
          ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 1610 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: RGBx\n"); 
              (yyval) = construct_value_number(12, NULL); 
          ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1615 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Depth\n"); 
              (yyval) = construct_value_number(13, NULL); 
          ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 1620 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: DepthStencil\n"); 
              (yyval) = construct_value_number(14, NULL); 
          ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1625 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: sRGB\n"); 
              (yyval) = construct_value_number(15, NULL); 
          ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1630 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: sRGBx\n"); 
              (yyval) = construct_value_number(16, NULL); 
          ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1635 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: sRGBA\n"); 
              (yyval) = construct_value_number(17, NULL); 
          ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 1640 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: sBGRA\n"); 
              (yyval) = construct_value_number(18, NULL); 
          ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 1645 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ABGR\n"); 
              (yyval) = construct_value_number(19, NULL); 
          ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1650 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SnormInt8\n"); 
              (yyval) = construct_value_number(0, NULL); 
          ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 1655 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SnormInt16\n"); 
              (yyval) = construct_value_number(1, NULL); 
          ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 1660 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: UnormInt8\n"); 
              (yyval) = construct_value_number(2, NULL); 
          ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 1665 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: UnormInt16\n"); 
              (yyval) = construct_value_number(3, NULL); 
          ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 1670 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: UnormShort565\n"); 
              (yyval) = construct_value_number(4, NULL); 
          ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1675 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: UnormShort555\n"); 
              (yyval) = construct_value_number(5, NULL); 
          ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1680 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: UnormInt101010\n"); 
              (yyval) = construct_value_number(6, NULL); 
          ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1685 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SignedInt8\n"); 
              (yyval) = construct_value_number(7, NULL); 
          ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 1690 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SignedInt16\n"); 
              (yyval) = construct_value_number(8, NULL); 
          ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1695 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SignedInt32\n"); 
              (yyval) = construct_value_number(9, NULL); 
          ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1700 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: UnsignedInt8\n"); 
              (yyval) = construct_value_number(10, NULL); 
          ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1705 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: UnsignedInt16\n"); 
              (yyval) = construct_value_number(11, NULL); 
          ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1710 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: UnsignedInt32\n"); 
              (yyval) = construct_value_number(12, NULL); 
          ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 1715 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: HalfFloat\n"); 
              (yyval) = construct_value_number(13, NULL); 
          ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1720 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Float\n"); 
              (yyval) = construct_value_number(14, NULL); 
          ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1725 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: UnormInt24\n"); 
              (yyval) = construct_value_number(15, NULL); 
          ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 1730 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: UnormInt101010_2\n"); 
              (yyval) = construct_value_number(16, NULL); 
          ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1735 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Bias\n"); 
              (yyval) = construct_value_number(0x1, NULL); 
          ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1740 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Lod\n"); 
              (yyval) = construct_value_number(0x2, NULL); 
          ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1745 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Grad\n"); 
              (yyval) = construct_value_number(0x4, NULL); 
          ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1750 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ConstOffset\n"); 
              (yyval) = construct_value_number(0x8, NULL); 
          ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1755 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Offset\n"); 
              (yyval) = construct_value_number(35, NULL); 
          ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1760 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ConstOffsets\n"); 
              (yyval) = construct_value_number(0x20, NULL); 
          ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1765 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Sample\n"); 
              (yyval) = construct_value_number(17, NULL); 
          ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1770 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: MinLod\n"); 
              (yyval) = construct_value_number(42, NULL); 
          ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1775 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: NotNaN\n"); 
              (yyval) = construct_value_number(0x1, NULL); 
          ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1780 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: NotInf\n"); 
              (yyval) = construct_value_number(0x2, NULL); 
          ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1785 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: NSZ\n"); 
              (yyval) = construct_value_number(0x4, NULL); 
          ;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1790 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: AllowRecip\n"); 
              (yyval) = construct_value_number(0x8, NULL); 
          ;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1795 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Fast\n"); 
              (yyval) = construct_value_number(0x10, NULL); 
          ;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1800 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: RTE\n"); 
              (yyval) = construct_value_number(0, NULL); 
          ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1805 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: RTZ\n"); 
              (yyval) = construct_value_number(1, NULL); 
          ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 1810 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: RTP\n"); 
              (yyval) = construct_value_number(2, NULL); 
          ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 1815 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: RTN\n"); 
              (yyval) = construct_value_number(3, NULL); 
          ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 1820 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Export\n"); 
              (yyval) = construct_value_number(0, NULL); 
          ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 1825 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Import\n"); 
              (yyval) = construct_value_number(1, NULL); 
          ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 1830 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ReadOnly\n"); 
              (yyval) = construct_value_number(0, NULL); 
          ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 1835 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: WriteOnly\n"); 
              (yyval) = construct_value_number(1, NULL); 
          ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 1840 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ReadWrite\n"); 
              (yyval) = construct_value_number(2, NULL); 
          ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 1845 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Zext\n"); 
              (yyval) = construct_value_number(0, NULL); 
          ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 1850 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Sext\n"); 
              (yyval) = construct_value_number(1, NULL); 
          ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 1855 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ByVal\n"); 
              (yyval) = construct_value_number(2, NULL); 
          ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 1860 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Sret\n"); 
              (yyval) = construct_value_number(3, NULL); 
          ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 1865 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: NoAlias\n"); 
              (yyval) = construct_value_number(4, NULL); 
          ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 1870 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: NoCapture\n"); 
              (yyval) = construct_value_number(5, NULL); 
          ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 1875 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: NoWrite\n"); 
              (yyval) = construct_value_number(6, NULL); 
          ;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 1880 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: NoReadWrite\n"); 
              (yyval) = construct_value_number(7, NULL); 
          ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 1885 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: RelaxedPrecision\n"); 
              (yyval) = construct_value_number(0, NULL); 
          ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 1890 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SpecId\n"); 
              (yyval) = construct_value_number(1, NULL); 
          ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 1895 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Block\n"); 
              (yyval) = construct_value_number(2, NULL); 
          ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 1900 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: BufferBlock\n"); 
              (yyval) = construct_value_number(3, NULL); 
          ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 1905 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: RowMajor\n"); 
              (yyval) = construct_value_number(4, NULL); 
          ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 1910 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ColMajor\n"); 
              (yyval) = construct_value_number(5, NULL); 
          ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 1915 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ArrayStride\n"); 
              (yyval) = construct_value_number(6, NULL); 
          ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 1920 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: MatrixStride\n"); 
              (yyval) = construct_value_number(7, NULL); 
          ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 1925 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: GLSLShared\n"); 
              (yyval) = construct_value_number(8, NULL); 
          ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 1930 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: GLSLPacked\n"); 
              (yyval) = construct_value_number(9, NULL); 
          ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 1935 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: CPacked\n"); 
              (yyval) = construct_value_number(10, NULL); 
          ;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 1940 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: BuiltIn\n"); 
              (yyval) = construct_value_number(11, NULL); 
          ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 1945 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: NoPerspective\n"); 
              (yyval) = construct_value_number(13, NULL); 
          ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 1950 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Flat\n"); 
              (yyval) = construct_value_number(14, NULL); 
          ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 1955 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Patch\n"); 
              (yyval) = construct_value_number(15, NULL); 
          ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 1960 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Centroid\n"); 
              (yyval) = construct_value_number(16, NULL); 
          ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 1965 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Invariant\n"); 
              (yyval) = construct_value_number(18, NULL); 
          ;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 1970 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Restrict\n"); 
              (yyval) = construct_value_number(19, NULL); 
          ;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 1975 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Aliased\n"); 
              (yyval) = construct_value_number(20, NULL); 
          ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 1980 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Volatile\n"); 
              (yyval) = construct_value_number(0x1, NULL); 
          ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 1985 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Constant\n"); 
              (yyval) = construct_value_number(22, NULL); 
          ;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 1990 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Coherent\n"); 
              (yyval) = construct_value_number(23, NULL); 
          ;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 1995 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: NonWritable\n"); 
              (yyval) = construct_value_number(24, NULL); 
          ;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 2000 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: NonReadable\n"); 
              (yyval) = construct_value_number(25, NULL); 
          ;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 2005 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SaturatedConversion\n"); 
              (yyval) = construct_value_number(28, NULL); 
          ;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 2010 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Stream\n"); 
              (yyval) = construct_value_number(29, NULL); 
          ;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 2015 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Location\n"); 
              (yyval) = construct_value_number(30, NULL); 
          ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 2020 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Component\n"); 
              (yyval) = construct_value_number(31, NULL); 
          ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 2025 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Index\n"); 
              (yyval) = construct_value_number(32, NULL); 
          ;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 2030 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Binding\n"); 
              (yyval) = construct_value_number(33, NULL); 
          ;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 2035 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: DescriptorSet\n"); 
              (yyval) = construct_value_number(34, NULL); 
          ;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 2040 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: XfbBuffer\n"); 
              (yyval) = construct_value_number(36, NULL); 
          ;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 2045 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: XfbStride\n"); 
              (yyval) = construct_value_number(37, NULL); 
          ;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 2050 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: FuncParamAttr\n"); 
              (yyval) = construct_value_number(38, NULL); 
          ;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 2055 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: FPRoundingMode\n"); 
              (yyval) = construct_value_number(39, NULL); 
          ;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 2060 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: FPFastMathMode\n"); 
              (yyval) = construct_value_number(40, NULL); 
          ;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 2065 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: LinkageAttributes\n"); 
              (yyval) = construct_value_number(41, NULL); 
          ;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 2070 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: NoContraction\n"); 
              (yyval) = construct_value_number(42, NULL); 
          ;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 2075 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: InputAttachmentIndex\n"); 
              (yyval) = construct_value_number(43, NULL); 
          ;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 2080 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Alignment\n"); 
              (yyval) = construct_value_number(44, NULL); 
          ;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 2085 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: MaxByteOffset\n"); 
              (yyval) = construct_value_number(45, NULL); 
          ;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 2090 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: AlignmentId\n"); 
              (yyval) = construct_value_number(46, NULL); 
          ;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 2095 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: MaxByteOffsetId\n"); 
              (yyval) = construct_value_number(47, NULL); 
          ;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 2100 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ExplicitInterpAMD\n"); 
              (yyval) = construct_value_number(4999, NULL); 
          ;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 2105 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: OverrideCoverageNV\n"); 
              (yyval) = construct_value_number(5248, NULL); 
          ;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 2110 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: PassthroughNV\n"); 
              (yyval) = construct_value_number(5250, NULL); 
          ;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 2115 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ViewportRelativeNV\n"); 
              (yyval) = construct_value_number(5252, NULL); 
          ;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 2120 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SecondaryViewportRelativeNV\n"); 
              (yyval) = construct_value_number(5256, NULL); 
          ;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 2125 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: NonUniformEXT\n"); 
              (yyval) = construct_value_number(5300, NULL); 
          ;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 2130 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: HlslCounterBufferGOOGLE\n"); 
              (yyval) = construct_value_number(5634, NULL); 
          ;}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 2135 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: HlslSemanticGOOGLE\n"); 
              (yyval) = construct_value_number(5635, NULL); 
          ;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 2140 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Position\n"); 
              (yyval) = construct_value_number(0, NULL); 
          ;}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 2145 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: PointSize\n"); 
              (yyval) = construct_value_number(1, NULL); 
          ;}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 2150 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ClipDistance\n"); 
              (yyval) = construct_value_number(32, NULL); 
          ;}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 2155 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: CullDistance\n"); 
              (yyval) = construct_value_number(33, NULL); 
          ;}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 2160 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: VertexId\n"); 
              (yyval) = construct_value_number(5, NULL); 
          ;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 2165 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: InstanceId\n"); 
              (yyval) = construct_value_number(6, NULL); 
          ;}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 2170 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: PrimitiveId\n"); 
              (yyval) = construct_value_number(7, NULL); 
          ;}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 2175 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: InvocationId\n"); 
              (yyval) = construct_value_number(8, NULL); 
          ;}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 2180 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Layer\n"); 
              (yyval) = construct_value_number(9, NULL); 
          ;}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 2185 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ViewportIndex\n"); 
              (yyval) = construct_value_number(10, NULL); 
          ;}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 2190 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: TessLevelOuter\n"); 
              (yyval) = construct_value_number(11, NULL); 
          ;}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 2195 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: TessLevelInner\n"); 
              (yyval) = construct_value_number(12, NULL); 
          ;}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 2200 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: TessCoord\n"); 
              (yyval) = construct_value_number(13, NULL); 
          ;}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 2205 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: PatchVertices\n"); 
              (yyval) = construct_value_number(14, NULL); 
          ;}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 2210 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: FragCoord\n"); 
              (yyval) = construct_value_number(15, NULL); 
          ;}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 2215 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: PointCoord\n"); 
              (yyval) = construct_value_number(16, NULL); 
          ;}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 2220 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: FrontFacing\n"); 
              (yyval) = construct_value_number(17, NULL); 
          ;}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 2225 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SampleId\n"); 
              (yyval) = construct_value_number(18, NULL); 
          ;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 2230 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SamplePosition\n"); 
              (yyval) = construct_value_number(19, NULL); 
          ;}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 2235 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SampleMask\n"); 
              (yyval) = construct_value_number(20, NULL); 
          ;}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 2240 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: FragDepth\n"); 
              (yyval) = construct_value_number(22, NULL); 
          ;}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 2245 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: HelperInvocation\n"); 
              (yyval) = construct_value_number(23, NULL); 
          ;}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 2250 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: NumWorkgroups\n"); 
              (yyval) = construct_value_number(24, NULL); 
          ;}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 2255 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: WorkgroupSize\n"); 
              (yyval) = construct_value_number(25, NULL); 
          ;}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 2260 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: WorkgroupId\n"); 
              (yyval) = construct_value_number(26, NULL); 
          ;}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 2265 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: LocalInvocationId\n"); 
              (yyval) = construct_value_number(27, NULL); 
          ;}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 2270 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: GlobalInvocationId\n"); 
              (yyval) = construct_value_number(28, NULL); 
          ;}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 2275 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: LocalInvocationIndex\n"); 
              (yyval) = construct_value_number(29, NULL); 
          ;}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 2280 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: WorkDim\n"); 
              (yyval) = construct_value_number(30, NULL); 
          ;}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 2285 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: GlobalSize\n"); 
              (yyval) = construct_value_number(31, NULL); 
          ;}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 2290 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: EnqueuedWorkgroupSize\n"); 
              (yyval) = construct_value_number(32, NULL); 
          ;}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 2295 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: GlobalOffset\n"); 
              (yyval) = construct_value_number(33, NULL); 
          ;}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 2300 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: GlobalLinearId\n"); 
              (yyval) = construct_value_number(34, NULL); 
          ;}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 2305 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SubgroupMaxSize\n"); 
              (yyval) = construct_value_number(37, NULL); 
          ;}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 2310 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: NumSubgroups\n"); 
              (yyval) = construct_value_number(38, NULL); 
          ;}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 2315 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: NumEnqueuedSubgroups\n"); 
              (yyval) = construct_value_number(39, NULL); 
          ;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 2320 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SubgroupId\n"); 
              (yyval) = construct_value_number(40, NULL); 
          ;}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 2325 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SubgroupLocalInvocationId\n"); 
              (yyval) = construct_value_number(41, NULL); 
          ;}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 2330 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: VertexIndex\n"); 
              (yyval) = construct_value_number(42, NULL); 
          ;}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 2335 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: InstanceIndex\n"); 
              (yyval) = construct_value_number(43, NULL); 
          ;}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 2340 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SubgroupEqMask\n"); 
              (yyval) = construct_value_number(4416, NULL); 
          ;}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 2345 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SubgroupGeMask\n"); 
              (yyval) = construct_value_number(4417, NULL); 
          ;}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 2350 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SubgroupGtMask\n"); 
              (yyval) = construct_value_number(4418, NULL); 
          ;}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 2355 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SubgroupLeMask\n"); 
              (yyval) = construct_value_number(4419, NULL); 
          ;}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 2360 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SubgroupLtMask\n"); 
              (yyval) = construct_value_number(4420, NULL); 
          ;}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 2365 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SubgroupEqMaskKHR\n"); 
              (yyval) = construct_value_number(4416, NULL); 
          ;}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 2370 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SubgroupGeMaskKHR\n"); 
              (yyval) = construct_value_number(4417, NULL); 
          ;}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 2375 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SubgroupGtMaskKHR\n"); 
              (yyval) = construct_value_number(4418, NULL); 
          ;}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 2380 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SubgroupLeMaskKHR\n"); 
              (yyval) = construct_value_number(4419, NULL); 
          ;}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 2385 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SubgroupLtMaskKHR\n"); 
              (yyval) = construct_value_number(4420, NULL); 
          ;}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 2390 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: BaseVertex\n"); 
              (yyval) = construct_value_number(4424, NULL); 
          ;}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 2395 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: BaseInstance\n"); 
              (yyval) = construct_value_number(4425, NULL); 
          ;}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 2400 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: DrawIndex\n"); 
              (yyval) = construct_value_number(4426, NULL); 
          ;}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 2405 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: DeviceIndex\n"); 
              (yyval) = construct_value_number(4438, NULL); 
          ;}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 2410 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ViewIndex\n"); 
              (yyval) = construct_value_number(4440, NULL); 
          ;}
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 2415 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: BaryCoordNoPerspAMD\n"); 
              (yyval) = construct_value_number(4992, NULL); 
          ;}
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 2420 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: BaryCoordNoPerspCentroidAMD\n"); 
              (yyval) = construct_value_number(4993, NULL); 
          ;}
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 2425 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: BaryCoordNoPerspSampleAMD\n"); 
              (yyval) = construct_value_number(4994, NULL); 
          ;}
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 2430 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: BaryCoordSmoothAMD\n"); 
              (yyval) = construct_value_number(4995, NULL); 
          ;}
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 2435 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: BaryCoordSmoothCentroidAMD\n"); 
              (yyval) = construct_value_number(4996, NULL); 
          ;}
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 2440 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: BaryCoordSmoothSampleAMD\n"); 
              (yyval) = construct_value_number(4997, NULL); 
          ;}
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 2445 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: BaryCoordPullModelAMD\n"); 
              (yyval) = construct_value_number(4998, NULL); 
          ;}
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 2450 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: FragStencilRefEXT\n"); 
              (yyval) = construct_value_number(5014, NULL); 
          ;}
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 2455 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ViewportMaskNV\n"); 
              (yyval) = construct_value_number(5253, NULL); 
          ;}
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 2460 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SecondaryPositionNV\n"); 
              (yyval) = construct_value_number(5257, NULL); 
          ;}
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 2465 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SecondaryViewportMaskNV\n"); 
              (yyval) = construct_value_number(5258, NULL); 
          ;}
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 2470 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: PositionPerViewNV\n"); 
              (yyval) = construct_value_number(5261, NULL); 
          ;}
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 2475 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ViewportMaskPerViewNV\n"); 
              (yyval) = construct_value_number(5262, NULL); 
          ;}
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 2480 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: FullyCoveredEXT\n"); 
              (yyval) = construct_value_number(5264, NULL); 
          ;}
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 2485 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Flatten\n"); 
              (yyval) = construct_value_number(0x1, NULL); 
          ;}
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 2490 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: DontFlatten\n"); 
              (yyval) = construct_value_number(0x2, NULL); 
          ;}
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 2495 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Unroll\n"); 
              (yyval) = construct_value_number(0x1, NULL); 
          ;}
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 2500 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: DontUnroll\n"); 
              (yyval) = construct_value_number(0x2, NULL); 
          ;}
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 2505 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: DependencyInfinite\n"); 
              (yyval) = construct_value_number(0x4, NULL); 
          ;}
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 2510 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: DependencyLength\n"); 
              (yyval) = construct_value_number(0x8, NULL); 
          ;}
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 2515 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Inline\n"); 
              (yyval) = construct_value_number(0x1, NULL); 
          ;}
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 2520 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: DontInline\n"); 
              (yyval) = construct_value_number(0x2, NULL); 
          ;}
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 2525 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Pure\n"); 
              (yyval) = construct_value_number(0x4, NULL); 
          ;}
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 2530 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Const\n"); 
              (yyval) = construct_value_number(0x8, NULL); 
          ;}
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 2535 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Acquire\n"); 
              (yyval) = construct_value_number(0x2, NULL); 
          ;}
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 2540 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Release\n"); 
              (yyval) = construct_value_number(0x4, NULL); 
          ;}
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 2545 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: AcquireRelease\n"); 
              (yyval) = construct_value_number(0x8, NULL); 
          ;}
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 2550 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SequentiallyConsistent\n"); 
              (yyval) = construct_value_number(0x10, NULL); 
          ;}
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 2555 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: UniformMemory\n"); 
              (yyval) = construct_value_number(0x40, NULL); 
          ;}
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 2560 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SubgroupMemory\n"); 
              (yyval) = construct_value_number(0x80, NULL); 
          ;}
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 2565 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: WorkgroupMemory\n"); 
              (yyval) = construct_value_number(0x100, NULL); 
          ;}
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 2570 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: CrossWorkgroupMemory\n"); 
              (yyval) = construct_value_number(0x200, NULL); 
          ;}
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 2575 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: AtomicCounterMemory\n"); 
              (yyval) = construct_value_number(0x400, NULL); 
          ;}
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 2580 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ImageMemory\n"); 
              (yyval) = construct_value_number(0x800, NULL); 
          ;}
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 2585 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Aligned\n"); 
              (yyval) = construct_value_number(0x2, NULL); 
          ;}
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 2590 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Nontemporal\n"); 
              (yyval) = construct_value_number(0x4, NULL); 
          ;}
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 2595 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: CrossDevice\n"); 
              (yyval) = construct_value_number(0, NULL); 
          ;}
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 2600 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Device\n"); 
              (yyval) = construct_value_number(1, NULL); 
          ;}
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 2605 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Subgroup\n"); 
              (yyval) = construct_value_number(3, NULL); 
          ;}
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 2610 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Invocation\n"); 
              (yyval) = construct_value_number(4, NULL); 
          ;}
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 2615 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Reduce\n"); 
              (yyval) = construct_value_number(0, NULL); 
          ;}
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 2620 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: InclusiveScan\n"); 
              (yyval) = construct_value_number(1, NULL); 
          ;}
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 2625 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ExclusiveScan\n"); 
              (yyval) = construct_value_number(2, NULL); 
          ;}
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 2630 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ClusteredReduce\n"); 
              (yyval) = construct_value_number(3, NULL); 
          ;}
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 2635 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: PartitionedReduceNV\n"); 
              (yyval) = construct_value_number(6, NULL); 
          ;}
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 2640 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: PartitionedInclusiveScanNV\n"); 
              (yyval) = construct_value_number(7, NULL); 
          ;}
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 2645 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: PartitionedExclusiveScanNV\n"); 
              (yyval) = construct_value_number(8, NULL); 
          ;}
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 2650 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: NoWait\n"); 
              (yyval) = construct_value_number(0, NULL); 
          ;}
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 2655 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: WaitKernel\n"); 
              (yyval) = construct_value_number(1, NULL); 
          ;}
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 2660 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: WaitWorkGroup\n"); 
              (yyval) = construct_value_number(2, NULL); 
          ;}
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 2665 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: CmdExecTime\n"); 
              (yyval) = construct_value_number(0x1, NULL); 
          ;}
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 2670 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Matrix\n"); 
              (yyval) = construct_value_number(0, NULL); 
          ;}
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 2675 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Shader\n"); 
              (yyval) = construct_value_number(1, NULL); 
          ;}
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 2680 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Tessellation\n"); 
              (yyval) = construct_value_number(3, NULL); 
          ;}
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 2685 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Addresses\n"); 
              (yyval) = construct_value_number(4, NULL); 
          ;}
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 2690 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Linkage\n"); 
              (yyval) = construct_value_number(5, NULL); 
          ;}
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 2695 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Vector16\n"); 
              (yyval) = construct_value_number(7, NULL); 
          ;}
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 2700 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Float16Buffer\n"); 
              (yyval) = construct_value_number(8, NULL); 
          ;}
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 2705 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Float16\n"); 
              (yyval) = construct_value_number(9, NULL); 
          ;}
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 2710 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Float64\n"); 
              (yyval) = construct_value_number(10, NULL); 
          ;}
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 2715 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Int64\n"); 
              (yyval) = construct_value_number(11, NULL); 
          ;}
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 2720 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Int64Atomics\n"); 
              (yyval) = construct_value_number(12, NULL); 
          ;}
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 2725 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ImageBasic\n"); 
              (yyval) = construct_value_number(13, NULL); 
          ;}
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 2730 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ImageReadWrite\n"); 
              (yyval) = construct_value_number(14, NULL); 
          ;}
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 2735 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ImageMipmap\n"); 
              (yyval) = construct_value_number(15, NULL); 
          ;}
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 2740 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Pipes\n"); 
              (yyval) = construct_value_number(17, NULL); 
          ;}
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 2745 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Groups\n"); 
              (yyval) = construct_value_number(18, NULL); 
          ;}
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 2750 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: DeviceEnqueue\n"); 
              (yyval) = construct_value_number(19, NULL); 
          ;}
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 2755 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: LiteralSampler\n"); 
              (yyval) = construct_value_number(20, NULL); 
          ;}
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 2760 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: AtomicStorage\n"); 
              (yyval) = construct_value_number(21, NULL); 
          ;}
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 2765 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Int16\n"); 
              (yyval) = construct_value_number(22, NULL); 
          ;}
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 2770 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: TessellationPointSize\n"); 
              (yyval) = construct_value_number(23, NULL); 
          ;}
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 2775 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: GeometryPointSize\n"); 
              (yyval) = construct_value_number(24, NULL); 
          ;}
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 2780 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ImageGatherExtended\n"); 
              (yyval) = construct_value_number(25, NULL); 
          ;}
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 2785 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: StorageImageMultisample\n"); 
              (yyval) = construct_value_number(27, NULL); 
          ;}
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 2790 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: UniformBufferArrayDynamicIndexing\n"); 
              (yyval) = construct_value_number(28, NULL); 
          ;}
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 2795 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SampledImageArrayDynamicIndexing\n"); 
              (yyval) = construct_value_number(29, NULL); 
          ;}
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 2800 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: StorageBufferArrayDynamicIndexing\n"); 
              (yyval) = construct_value_number(30, NULL); 
          ;}
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 2805 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: StorageImageArrayDynamicIndexing\n"); 
              (yyval) = construct_value_number(31, NULL); 
          ;}
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 2810 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ImageCubeArray\n"); 
              (yyval) = construct_value_number(34, NULL); 
          ;}
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 2815 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SampleRateShading\n"); 
              (yyval) = construct_value_number(35, NULL); 
          ;}
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 2820 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ImageRect\n"); 
              (yyval) = construct_value_number(36, NULL); 
          ;}
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 2825 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SampledRect\n"); 
              (yyval) = construct_value_number(37, NULL); 
          ;}
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 2830 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: GenericPointer\n"); 
              (yyval) = construct_value_number(38, NULL); 
          ;}
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 2835 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Int8\n"); 
              (yyval) = construct_value_number(39, NULL); 
          ;}
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 2840 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: InputAttachment\n"); 
              (yyval) = construct_value_number(40, NULL); 
          ;}
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 2845 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SparseResidency\n"); 
              (yyval) = construct_value_number(41, NULL); 
          ;}
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 2850 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Sampled1D\n"); 
              (yyval) = construct_value_number(43, NULL); 
          ;}
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 2855 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Image1D\n"); 
              (yyval) = construct_value_number(44, NULL); 
          ;}
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 2860 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SampledCubeArray\n"); 
              (yyval) = construct_value_number(45, NULL); 
          ;}
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 2865 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SampledBuffer\n"); 
              (yyval) = construct_value_number(46, NULL); 
          ;}
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 2870 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ImageBuffer\n"); 
              (yyval) = construct_value_number(47, NULL); 
          ;}
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 2875 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ImageMSArray\n"); 
              (yyval) = construct_value_number(48, NULL); 
          ;}
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 2880 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: StorageImageExtendedFormats\n"); 
              (yyval) = construct_value_number(49, NULL); 
          ;}
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 2885 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ImageQuery\n"); 
              (yyval) = construct_value_number(50, NULL); 
          ;}
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 2890 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: DerivativeControl\n"); 
              (yyval) = construct_value_number(51, NULL); 
          ;}
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 2895 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: InterpolationFunction\n"); 
              (yyval) = construct_value_number(52, NULL); 
          ;}
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 2900 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: TransformFeedback\n"); 
              (yyval) = construct_value_number(53, NULL); 
          ;}
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 2905 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: GeometryStreams\n"); 
              (yyval) = construct_value_number(54, NULL); 
          ;}
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 2910 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: StorageImageReadWithoutFormat\n"); 
              (yyval) = construct_value_number(55, NULL); 
          ;}
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 2915 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: StorageImageWriteWithoutFormat\n"); 
              (yyval) = construct_value_number(56, NULL); 
          ;}
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 2920 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: MultiViewport\n"); 
              (yyval) = construct_value_number(57, NULL); 
          ;}
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 2925 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SubgroupDispatch\n"); 
              (yyval) = construct_value_number(58, NULL); 
          ;}
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 2930 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: NamedBarrier\n"); 
              (yyval) = construct_value_number(59, NULL); 
          ;}
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 2935 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: PipeStorage\n"); 
              (yyval) = construct_value_number(60, NULL); 
          ;}
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 2940 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: GroupNonUniform\n"); 
              (yyval) = construct_value_number(61, NULL); 
          ;}
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 2945 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: GroupNonUniformVote\n"); 
              (yyval) = construct_value_number(62, NULL); 
          ;}
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 2950 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: GroupNonUniformArithmetic\n"); 
              (yyval) = construct_value_number(63, NULL); 
          ;}
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 2955 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: GroupNonUniformBallot\n"); 
              (yyval) = construct_value_number(64, NULL); 
          ;}
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 2960 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: GroupNonUniformShuffle\n"); 
              (yyval) = construct_value_number(65, NULL); 
          ;}
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 2965 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: GroupNonUniformShuffleRelative\n"); 
              (yyval) = construct_value_number(66, NULL); 
          ;}
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 2970 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: GroupNonUniformClustered\n"); 
              (yyval) = construct_value_number(67, NULL); 
          ;}
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 2975 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: GroupNonUniformQuad\n"); 
              (yyval) = construct_value_number(68, NULL); 
          ;}
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 2980 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SubgroupBallotKHR\n"); 
              (yyval) = construct_value_number(4423, NULL); 
          ;}
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 2985 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: DrawParameters\n"); 
              (yyval) = construct_value_number(4427, NULL); 
          ;}
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 2990 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SubgroupVoteKHR\n"); 
              (yyval) = construct_value_number(4431, NULL); 
          ;}
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 2995 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: StorageBuffer16BitAccess\n"); 
              (yyval) = construct_value_number(4433, NULL); 
          ;}
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 3000 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: StorageUniformBufferBlock16\n"); 
              (yyval) = construct_value_number(4433, NULL); 
          ;}
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 3005 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: UniformAndStorageBuffer16BitAccess\n"); 
              (yyval) = construct_value_number(4434, NULL); 
          ;}
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 3010 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: StorageUniform16\n"); 
              (yyval) = construct_value_number(4434, NULL); 
          ;}
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 3015 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: StoragePushConstant16\n"); 
              (yyval) = construct_value_number(4435, NULL); 
          ;}
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 3020 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: StorageInputOutput16\n"); 
              (yyval) = construct_value_number(4436, NULL); 
          ;}
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 3025 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: DeviceGroup\n"); 
              (yyval) = construct_value_number(4437, NULL); 
          ;}
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 3030 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: MultiView\n"); 
              (yyval) = construct_value_number(4439, NULL); 
          ;}
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 3035 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: VariablePointersStorageBuffer\n"); 
              (yyval) = construct_value_number(4441, NULL); 
          ;}
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 3040 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: VariablePointers\n"); 
              (yyval) = construct_value_number(4442, NULL); 
          ;}
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 3045 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: AtomicStorageOps\n"); 
              (yyval) = construct_value_number(4445, NULL); 
          ;}
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 3050 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SampleMaskPostDepthCoverage\n"); 
              (yyval) = construct_value_number(4447, NULL); 
          ;}
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 3055 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Float16ImageAMD\n"); 
              (yyval) = construct_value_number(5008, NULL); 
          ;}
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 3060 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ImageGatherBiasLodAMD\n"); 
              (yyval) = construct_value_number(5009, NULL); 
          ;}
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 3065 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: FragmentMaskAMD\n"); 
              (yyval) = construct_value_number(5010, NULL); 
          ;}
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 3070 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: StencilExportEXT\n"); 
              (yyval) = construct_value_number(5013, NULL); 
          ;}
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 3075 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ImageReadWriteLodAMD\n"); 
              (yyval) = construct_value_number(5015, NULL); 
          ;}
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 3080 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SampleMaskOverrideCoverageNV\n"); 
              (yyval) = construct_value_number(5249, NULL); 
          ;}
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 3085 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: GeometryShaderPassthroughNV\n"); 
              (yyval) = construct_value_number(5251, NULL); 
          ;}
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 3090 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ShaderViewportIndexLayerEXT\n"); 
              (yyval) = construct_value_number(5254, NULL); 
          ;}
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 3095 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ShaderViewportIndexLayerNV\n"); 
              (yyval) = construct_value_number(5254, NULL); 
          ;}
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 3100 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ShaderViewportMaskNV\n"); 
              (yyval) = construct_value_number(5255, NULL); 
          ;}
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 3105 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ShaderStereoViewNV\n"); 
              (yyval) = construct_value_number(5259, NULL); 
          ;}
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 3110 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: PerViewAttributesNV\n"); 
              (yyval) = construct_value_number(5260, NULL); 
          ;}
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 3115 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: FragmentFullyCoveredEXT\n"); 
              (yyval) = construct_value_number(5265, NULL); 
          ;}
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 3120 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ShaderNonUniformEXT\n"); 
              (yyval) = construct_value_number(5301, NULL); 
          ;}
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 3125 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: RuntimeDescriptorArrayEXT\n"); 
              (yyval) = construct_value_number(5302, NULL); 
          ;}
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 3130 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: InputAttachmentArrayDynamicIndexingEXT\n"); 
              (yyval) = construct_value_number(5303, NULL); 
          ;}
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 3135 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: UniformTexelBufferArrayDynamicIndexingEXT\n"); 
              (yyval) = construct_value_number(5304, NULL); 
          ;}
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 3140 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: StorageTexelBufferArrayDynamicIndexingEXT\n"); 
              (yyval) = construct_value_number(5305, NULL); 
          ;}
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 3145 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: UniformBufferArrayNonUniformIndexingEXT\n"); 
              (yyval) = construct_value_number(5306, NULL); 
          ;}
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 3150 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SampledImageArrayNonUniformIndexingEXT\n"); 
              (yyval) = construct_value_number(5307, NULL); 
          ;}
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 3155 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: StorageBufferArrayNonUniformIndexingEXT\n"); 
              (yyval) = construct_value_number(5308, NULL); 
          ;}
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 3160 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: StorageImageArrayNonUniformIndexingEXT\n"); 
              (yyval) = construct_value_number(5309, NULL); 
          ;}
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 3165 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: InputAttachmentArrayNonUniformIndexingEXT\n"); 
              (yyval) = construct_value_number(5310, NULL); 
          ;}
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 3170 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: UniformTexelBufferArrayNonUniformIndexingEXT\n"); 
              (yyval) = construct_value_number(5311, NULL); 
          ;}
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 3175 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: StorageTexelBufferArrayNonUniformIndexingEXT\n"); 
              (yyval) = construct_value_number(5312, NULL); 
          ;}
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 3180 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SubgroupShuffleINTEL\n"); 
              (yyval) = construct_value_number(5568, NULL); 
          ;}
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 3185 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SubgroupBufferBlockIOINTEL\n"); 
              (yyval) = construct_value_number(5569, NULL); 
          ;}
    break;

  case 470:

/* Line 1455 of yacc.c  */
#line 3190 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SubgroupImageBlockIOINTEL\n"); 
              (yyval) = construct_value_number(5570, NULL); 
          ;}
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 3195 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: GroupNonUniformPartitionedNV\n"); 
              (yyval) = construct_value_number(5297, NULL); 
          ;}
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 3200 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Round\n"); 
              (yyval) = construct_value_number(1, NULL); 
          ;}
    break;

  case 473:

/* Line 1455 of yacc.c  */
#line 3205 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: RoundEven\n"); 
              (yyval) = construct_value_number(2, NULL); 
          ;}
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 3210 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Trunc\n"); 
              (yyval) = construct_value_number(3, NULL); 
          ;}
    break;

  case 475:

/* Line 1455 of yacc.c  */
#line 3215 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: FAbs\n"); 
              (yyval) = construct_value_number(4, NULL); 
          ;}
    break;

  case 476:

/* Line 1455 of yacc.c  */
#line 3220 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SAbs\n"); 
              (yyval) = construct_value_number(5, NULL); 
          ;}
    break;

  case 477:

/* Line 1455 of yacc.c  */
#line 3225 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: FSign\n"); 
              (yyval) = construct_value_number(6, NULL); 
          ;}
    break;

  case 478:

/* Line 1455 of yacc.c  */
#line 3230 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SSign\n"); 
              (yyval) = construct_value_number(7, NULL); 
          ;}
    break;

  case 479:

/* Line 1455 of yacc.c  */
#line 3235 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Floor\n"); 
              (yyval) = construct_value_number(8, NULL); 
          ;}
    break;

  case 480:

/* Line 1455 of yacc.c  */
#line 3240 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Ceil\n"); 
              (yyval) = construct_value_number(9, NULL); 
          ;}
    break;

  case 481:

/* Line 1455 of yacc.c  */
#line 3245 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Fract\n"); 
              (yyval) = construct_value_number(10, NULL); 
          ;}
    break;

  case 482:

/* Line 1455 of yacc.c  */
#line 3250 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Radians\n"); 
              (yyval) = construct_value_number(11, NULL); 
          ;}
    break;

  case 483:

/* Line 1455 of yacc.c  */
#line 3255 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Degrees\n"); 
              (yyval) = construct_value_number(12, NULL); 
          ;}
    break;

  case 484:

/* Line 1455 of yacc.c  */
#line 3260 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Sin\n"); 
              (yyval) = construct_value_number(13, NULL); 
          ;}
    break;

  case 485:

/* Line 1455 of yacc.c  */
#line 3265 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Cos\n"); 
              (yyval) = construct_value_number(14, NULL); 
          ;}
    break;

  case 486:

/* Line 1455 of yacc.c  */
#line 3270 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Tan\n"); 
              (yyval) = construct_value_number(15, NULL); 
          ;}
    break;

  case 487:

/* Line 1455 of yacc.c  */
#line 3275 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Asin\n"); 
              (yyval) = construct_value_number(16, NULL); 
          ;}
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 3280 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Acos\n"); 
              (yyval) = construct_value_number(17, NULL); 
          ;}
    break;

  case 489:

/* Line 1455 of yacc.c  */
#line 3285 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Atan\n"); 
              (yyval) = construct_value_number(18, NULL); 
          ;}
    break;

  case 490:

/* Line 1455 of yacc.c  */
#line 3290 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Sinh\n"); 
              (yyval) = construct_value_number(19, NULL); 
          ;}
    break;

  case 491:

/* Line 1455 of yacc.c  */
#line 3295 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Cosh\n"); 
              (yyval) = construct_value_number(20, NULL); 
          ;}
    break;

  case 492:

/* Line 1455 of yacc.c  */
#line 3300 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Tanh\n"); 
              (yyval) = construct_value_number(21, NULL); 
          ;}
    break;

  case 493:

/* Line 1455 of yacc.c  */
#line 3305 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Asinh\n"); 
              (yyval) = construct_value_number(22, NULL); 
          ;}
    break;

  case 494:

/* Line 1455 of yacc.c  */
#line 3310 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Acosh\n"); 
              (yyval) = construct_value_number(23, NULL); 
          ;}
    break;

  case 495:

/* Line 1455 of yacc.c  */
#line 3315 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Atanh\n"); 
              (yyval) = construct_value_number(24, NULL); 
          ;}
    break;

  case 496:

/* Line 1455 of yacc.c  */
#line 3320 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Atan2\n"); 
              (yyval) = construct_value_number(25, NULL); 
          ;}
    break;

  case 497:

/* Line 1455 of yacc.c  */
#line 3325 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Pow\n"); 
              (yyval) = construct_value_number(26, NULL); 
          ;}
    break;

  case 498:

/* Line 1455 of yacc.c  */
#line 3330 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Exp\n"); 
              (yyval) = construct_value_number(27, NULL); 
          ;}
    break;

  case 499:

/* Line 1455 of yacc.c  */
#line 3335 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Log\n"); 
              (yyval) = construct_value_number(28, NULL); 
          ;}
    break;

  case 500:

/* Line 1455 of yacc.c  */
#line 3340 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Exp2\n"); 
              (yyval) = construct_value_number(29, NULL); 
          ;}
    break;

  case 501:

/* Line 1455 of yacc.c  */
#line 3345 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Log2\n"); 
              (yyval) = construct_value_number(30, NULL); 
          ;}
    break;

  case 502:

/* Line 1455 of yacc.c  */
#line 3350 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Sqrt\n"); 
              (yyval) = construct_value_number(31, NULL); 
          ;}
    break;

  case 503:

/* Line 1455 of yacc.c  */
#line 3355 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: InverseSqrt\n"); 
              (yyval) = construct_value_number(32, NULL); 
          ;}
    break;

  case 504:

/* Line 1455 of yacc.c  */
#line 3360 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Determinant\n"); 
              (yyval) = construct_value_number(33, NULL); 
          ;}
    break;

  case 505:

/* Line 1455 of yacc.c  */
#line 3365 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: MatrixInverse\n"); 
              (yyval) = construct_value_number(34, NULL); 
          ;}
    break;

  case 506:

/* Line 1455 of yacc.c  */
#line 3370 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Modf\n"); 
              (yyval) = construct_value_number(35, NULL); 
          ;}
    break;

  case 507:

/* Line 1455 of yacc.c  */
#line 3375 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: ModfStruct\n"); 
              (yyval) = construct_value_number(36, NULL); 
          ;}
    break;

  case 508:

/* Line 1455 of yacc.c  */
#line 3380 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: FMin\n"); 
              (yyval) = construct_value_number(37, NULL); 
          ;}
    break;

  case 509:

/* Line 1455 of yacc.c  */
#line 3385 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: UMin\n"); 
              (yyval) = construct_value_number(38, NULL); 
          ;}
    break;

  case 510:

/* Line 1455 of yacc.c  */
#line 3390 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SMin\n"); 
              (yyval) = construct_value_number(39, NULL); 
          ;}
    break;

  case 511:

/* Line 1455 of yacc.c  */
#line 3395 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: FMax\n"); 
              (yyval) = construct_value_number(40, NULL); 
          ;}
    break;

  case 512:

/* Line 1455 of yacc.c  */
#line 3400 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: UMax\n"); 
              (yyval) = construct_value_number(41, NULL); 
          ;}
    break;

  case 513:

/* Line 1455 of yacc.c  */
#line 3405 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SMax\n"); 
              (yyval) = construct_value_number(42, NULL); 
          ;}
    break;

  case 514:

/* Line 1455 of yacc.c  */
#line 3410 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: FClamp\n"); 
              (yyval) = construct_value_number(43, NULL); 
          ;}
    break;

  case 515:

/* Line 1455 of yacc.c  */
#line 3415 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: UClamp\n"); 
              (yyval) = construct_value_number(44, NULL); 
          ;}
    break;

  case 516:

/* Line 1455 of yacc.c  */
#line 3420 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SClamp\n"); 
              (yyval) = construct_value_number(45, NULL); 
          ;}
    break;

  case 517:

/* Line 1455 of yacc.c  */
#line 3425 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: FMix\n"); 
              (yyval) = construct_value_number(46, NULL); 
          ;}
    break;

  case 518:

/* Line 1455 of yacc.c  */
#line 3430 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Step\n"); 
              (yyval) = construct_value_number(48, NULL); 
          ;}
    break;

  case 519:

/* Line 1455 of yacc.c  */
#line 3435 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: SmoothStep\n"); 
              (yyval) = construct_value_number(49, NULL); 
          ;}
    break;

  case 520:

/* Line 1455 of yacc.c  */
#line 3440 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Fma\n"); 
              (yyval) = construct_value_number(50, NULL); 
          ;}
    break;

  case 521:

/* Line 1455 of yacc.c  */
#line 3445 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Frexp\n"); 
              (yyval) = construct_value_number(51, NULL); 
          ;}
    break;

  case 522:

/* Line 1455 of yacc.c  */
#line 3450 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: FrexpStruct\n"); 
              (yyval) = construct_value_number(52, NULL); 
          ;}
    break;

  case 523:

/* Line 1455 of yacc.c  */
#line 3455 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Ldexp\n"); 
              (yyval) = construct_value_number(53, NULL); 
          ;}
    break;

  case 524:

/* Line 1455 of yacc.c  */
#line 3460 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: PackSnorm4x8\n"); 
              (yyval) = construct_value_number(54, NULL); 
          ;}
    break;

  case 525:

/* Line 1455 of yacc.c  */
#line 3465 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: PackUnorm4x8\n"); 
              (yyval) = construct_value_number(55, NULL); 
          ;}
    break;

  case 526:

/* Line 1455 of yacc.c  */
#line 3470 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: PackSnorm2x16\n"); 
              (yyval) = construct_value_number(56, NULL); 
          ;}
    break;

  case 527:

/* Line 1455 of yacc.c  */
#line 3475 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: PackUnorm2x16\n"); 
              (yyval) = construct_value_number(57, NULL); 
          ;}
    break;

  case 528:

/* Line 1455 of yacc.c  */
#line 3480 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: PackHalf2x16\n"); 
              (yyval) = construct_value_number(58, NULL); 
          ;}
    break;

  case 529:

/* Line 1455 of yacc.c  */
#line 3485 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: PackDouble2x32\n"); 
              (yyval) = construct_value_number(59, NULL); 
          ;}
    break;

  case 530:

/* Line 1455 of yacc.c  */
#line 3490 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: UnpackSnorm2x16\n"); 
              (yyval) = construct_value_number(60, NULL); 
          ;}
    break;

  case 531:

/* Line 1455 of yacc.c  */
#line 3495 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: UnpackUnorm2x16\n"); 
              (yyval) = construct_value_number(61, NULL); 
          ;}
    break;

  case 532:

/* Line 1455 of yacc.c  */
#line 3500 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: UnpackHalf2x16\n"); 
              (yyval) = construct_value_number(62, NULL); 
          ;}
    break;

  case 533:

/* Line 1455 of yacc.c  */
#line 3505 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: UnpackSnorm4x8\n"); 
              (yyval) = construct_value_number(63, NULL); 
          ;}
    break;

  case 534:

/* Line 1455 of yacc.c  */
#line 3510 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: UnpackUnorm4x8\n"); 
              (yyval) = construct_value_number(64, NULL); 
          ;}
    break;

  case 535:

/* Line 1455 of yacc.c  */
#line 3515 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: UnpackDouble2x32\n"); 
              (yyval) = construct_value_number(65, NULL); 
          ;}
    break;

  case 536:

/* Line 1455 of yacc.c  */
#line 3520 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Length\n"); 
              (yyval) = construct_value_number(66, NULL); 
          ;}
    break;

  case 537:

/* Line 1455 of yacc.c  */
#line 3525 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Distance\n"); 
              (yyval) = construct_value_number(67, NULL); 
          ;}
    break;

  case 538:

/* Line 1455 of yacc.c  */
#line 3530 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Cross\n"); 
              (yyval) = construct_value_number(68, NULL); 
          ;}
    break;

  case 539:

/* Line 1455 of yacc.c  */
#line 3535 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Normalize\n"); 
              (yyval) = construct_value_number(69, NULL); 
          ;}
    break;

  case 540:

/* Line 1455 of yacc.c  */
#line 3540 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: FaceForward\n"); 
              (yyval) = construct_value_number(70, NULL); 
          ;}
    break;

  case 541:

/* Line 1455 of yacc.c  */
#line 3545 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Reflect\n"); 
              (yyval) = construct_value_number(71, NULL); 
          ;}
    break;

  case 542:

/* Line 1455 of yacc.c  */
#line 3550 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: Refract\n"); 
              (yyval) = construct_value_number(72, NULL); 
          ;}
    break;

  case 543:

/* Line 1455 of yacc.c  */
#line 3555 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: FindILsb\n"); 
              (yyval) = construct_value_number(73, NULL); 
          ;}
    break;

  case 544:

/* Line 1455 of yacc.c  */
#line 3560 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: FindSMsb\n"); 
              (yyval) = construct_value_number(74, NULL); 
          ;}
    break;

  case 545:

/* Line 1455 of yacc.c  */
#line 3565 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: FindUMsb\n"); 
              (yyval) = construct_value_number(75, NULL); 
          ;}
    break;

  case 546:

/* Line 1455 of yacc.c  */
#line 3570 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: InterpolateAtCentroid\n"); 
              (yyval) = construct_value_number(76, NULL); 
          ;}
    break;

  case 547:

/* Line 1455 of yacc.c  */
#line 3575 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: InterpolateAtSample\n"); 
              (yyval) = construct_value_number(77, NULL); 
          ;}
    break;

  case 548:

/* Line 1455 of yacc.c  */
#line 3580 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: InterpolateAtOffset\n"); 
              (yyval) = construct_value_number(78, NULL); 
          ;}
    break;

  case 549:

/* Line 1455 of yacc.c  */
#line 3585 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: NMin\n"); 
              (yyval) = construct_value_number(79, NULL); 
          ;}
    break;

  case 550:

/* Line 1455 of yacc.c  */
#line 3590 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: NMax\n"); 
              (yyval) = construct_value_number(80, NULL); 
          ;}
    break;

  case 551:

/* Line 1455 of yacc.c  */
#line 3595 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              //printf("Enum: NClamp\n"); 
              (yyval) = construct_value_number(81, NULL); 
          ;}
    break;

  case 552:

/* Line 1455 of yacc.c  */
#line 3600 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
      (yyval) = (yyvsp[(1) - (1)]); 
      ;}
    break;

  case 553:

/* Line 1455 of yacc.c  */
#line 3604 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
          char* c = (char*)malloc(strlen(yytext)-1); 
          memcpy(c, yytext + 1, strlen(yytext) - 2); 
          c[strlen(yytext) - 2] = 0; 
          (yyval) = construct_value_string(c, NULL); 
      ;}
    break;

  case 554:

/* Line 1455 of yacc.c  */
#line 3611 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
          (yyval) = (yyvsp[(1) - (1)]); 
      ;}
    break;

  case 555:

/* Line 1455 of yacc.c  */
#line 3614 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
          (yyval) = construct_value_identifier(strdup(yytext), NULL); 
          register_identifier((yyval)->string); 
      ;}
    break;

  case 556:

/* Line 1455 of yacc.c  */
#line 3618 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
          (yyval) = construct_value_number(strtol(yytext,NULL, 10), NULL); 
      ;}
    break;

  case 557:

/* Line 1455 of yacc.c  */
#line 3621 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
          (yyval) = construct_value_string(strdup(yytext), NULL); 
      ;}
    break;

  case 558:

/* Line 1455 of yacc.c  */
#line 3624 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
          (yyval) = construct_value_string(strdup(yytext), NULL); 
      ;}
    break;

  case 559:

/* Line 1455 of yacc.c  */
#line 3627 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
          (yyval) = construct_value_string(strdup(yytext), NULL); 
      ;}
    break;

  case 560:

/* Line 1455 of yacc.c  */
#line 3636 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(0, 0, NULL); 
              add_opcode((yyval)); 
              // printf("OpNop\n"); 
          ;}
    break;

  case 561:

/* Line 1455 of yacc.c  */
#line 3642 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(1, 1, NULL); 
              add_opcode((yyval)); 
              // printf("OpUndef\n"); 
          ;}
    break;

  case 562:

/* Line 1455 of yacc.c  */
#line 3648 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(2, 2, NULL); 
              add_opcode((yyval)); 
              // printf("OpSourceContinued\n"); 
          ;}
    break;

  case 563:

/* Line 1455 of yacc.c  */
#line 3654 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(3, 3, NULL); 
              add_opcode((yyval)); 
              // printf("OpSource\n"); 
          ;}
    break;

  case 564:

/* Line 1455 of yacc.c  */
#line 3660 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(4, 4, NULL); 
              add_opcode((yyval)); 
              // printf("OpSourceExtension\n"); 
          ;}
    break;

  case 565:

/* Line 1455 of yacc.c  */
#line 3666 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(5, 5, NULL); 
              add_opcode((yyval)); 
              // printf("OpName\n"); 
          ;}
    break;

  case 566:

/* Line 1455 of yacc.c  */
#line 3672 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(6, 6, NULL); 
              add_opcode((yyval)); 
              // printf("OpMemberName\n"); 
          ;}
    break;

  case 567:

/* Line 1455 of yacc.c  */
#line 3678 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(7, 7, NULL); 
              add_opcode((yyval)); 
              // printf("OpString\n"); 
          ;}
    break;

  case 568:

/* Line 1455 of yacc.c  */
#line 3684 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(8, 8, NULL); 
              add_opcode((yyval)); 
              // printf("OpLine\n"); 
          ;}
    break;

  case 569:

/* Line 1455 of yacc.c  */
#line 3690 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(317, 9, NULL); 
              add_opcode((yyval)); 
              // printf("OpNoLine\n"); 
          ;}
    break;

  case 570:

/* Line 1455 of yacc.c  */
#line 3696 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(71, 10, NULL); 
              add_opcode((yyval)); 
              // printf("OpDecorate\n"); 
          ;}
    break;

  case 571:

/* Line 1455 of yacc.c  */
#line 3702 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(72, 11, NULL); 
              add_opcode((yyval)); 
              // printf("OpMemberDecorate\n"); 
          ;}
    break;

  case 572:

/* Line 1455 of yacc.c  */
#line 3708 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(73, 12, NULL); 
              add_opcode((yyval)); 
              // printf("OpDecorationGroup\n"); 
          ;}
    break;

  case 573:

/* Line 1455 of yacc.c  */
#line 3714 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(74, 13, NULL); 
              add_opcode((yyval)); 
              // printf("OpGroupDecorate\n"); 
          ;}
    break;

  case 574:

/* Line 1455 of yacc.c  */
#line 3720 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(75, 14, NULL); 
              add_opcode((yyval)); 
              // printf("OpGroupMemberDecorate\n"); 
          ;}
    break;

  case 575:

/* Line 1455 of yacc.c  */
#line 3726 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(10, 15, NULL); 
              add_opcode((yyval)); 
              // printf("OpExtension\n"); 
          ;}
    break;

  case 576:

/* Line 1455 of yacc.c  */
#line 3732 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(11, 16, NULL); 
              add_opcode((yyval)); 
              // printf("OpExtInstImport\n"); 
          ;}
    break;

  case 577:

/* Line 1455 of yacc.c  */
#line 3738 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(12, 17, NULL); 
              add_opcode((yyval)); 
              // printf("OpExtInst\n"); 
          ;}
    break;

  case 578:

/* Line 1455 of yacc.c  */
#line 3744 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(14, 18, NULL); 
              add_opcode((yyval)); 
              // printf("OpMemoryModel\n"); 
          ;}
    break;

  case 579:

/* Line 1455 of yacc.c  */
#line 3750 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(15, 19, NULL); 
              add_opcode((yyval)); 
              // printf("OpEntryPoint\n"); 
          ;}
    break;

  case 580:

/* Line 1455 of yacc.c  */
#line 3756 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(16, 20, NULL); 
              add_opcode((yyval)); 
              // printf("OpExecutionMode\n"); 
          ;}
    break;

  case 581:

/* Line 1455 of yacc.c  */
#line 3762 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(17, 21, NULL); 
              add_opcode((yyval)); 
              // printf("OpCapability\n"); 
          ;}
    break;

  case 582:

/* Line 1455 of yacc.c  */
#line 3768 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(19, 22, NULL); 
              add_opcode((yyval)); 
              // printf("OpTypeVoid\n"); 
          ;}
    break;

  case 583:

/* Line 1455 of yacc.c  */
#line 3774 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(20, 23, NULL); 
              add_opcode((yyval)); 
              // printf("OpTypeBool\n"); 
          ;}
    break;

  case 584:

/* Line 1455 of yacc.c  */
#line 3780 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(21, 24, NULL); 
              add_opcode((yyval)); 
              // printf("OpTypeInt\n"); 
          ;}
    break;

  case 585:

/* Line 1455 of yacc.c  */
#line 3786 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(22, 25, NULL); 
              add_opcode((yyval)); 
              // printf("OpTypeFloat\n"); 
          ;}
    break;

  case 586:

/* Line 1455 of yacc.c  */
#line 3792 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(23, 26, NULL); 
              add_opcode((yyval)); 
              // printf("OpTypeVector\n"); 
          ;}
    break;

  case 587:

/* Line 1455 of yacc.c  */
#line 3798 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(24, 27, NULL); 
              add_opcode((yyval)); 
              // printf("OpTypeMatrix\n"); 
          ;}
    break;

  case 588:

/* Line 1455 of yacc.c  */
#line 3804 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(26, 28, NULL); 
              add_opcode((yyval)); 
              // printf("OpTypeSampler\n"); 
          ;}
    break;

  case 589:

/* Line 1455 of yacc.c  */
#line 3810 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(27, 29, NULL); 
              add_opcode((yyval)); 
              // printf("OpTypeSampledImage\n"); 
          ;}
    break;

  case 590:

/* Line 1455 of yacc.c  */
#line 3816 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(28, 30, NULL); 
              add_opcode((yyval)); 
              // printf("OpTypeArray\n"); 
          ;}
    break;

  case 591:

/* Line 1455 of yacc.c  */
#line 3822 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(29, 31, NULL); 
              add_opcode((yyval)); 
              // printf("OpTypeRuntimeArray\n"); 
          ;}
    break;

  case 592:

/* Line 1455 of yacc.c  */
#line 3828 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(30, 32, NULL); 
              add_opcode((yyval)); 
              // printf("OpTypeStruct\n"); 
          ;}
    break;

  case 593:

/* Line 1455 of yacc.c  */
#line 3834 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(31, 33, NULL); 
              add_opcode((yyval)); 
              // printf("OpTypeOpaque\n"); 
          ;}
    break;

  case 594:

/* Line 1455 of yacc.c  */
#line 3840 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(32, 34, NULL); 
              add_opcode((yyval)); 
              // printf("OpTypePointer\n"); 
          ;}
    break;

  case 595:

/* Line 1455 of yacc.c  */
#line 3846 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(33, 35, NULL); 
              add_opcode((yyval)); 
              // printf("OpTypeFunction\n"); 
          ;}
    break;

  case 596:

/* Line 1455 of yacc.c  */
#line 3852 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(34, 36, NULL); 
              add_opcode((yyval)); 
              // printf("OpTypeEvent\n"); 
          ;}
    break;

  case 597:

/* Line 1455 of yacc.c  */
#line 3858 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(35, 37, NULL); 
              add_opcode((yyval)); 
              // printf("OpTypeDeviceEvent\n"); 
          ;}
    break;

  case 598:

/* Line 1455 of yacc.c  */
#line 3864 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(36, 38, NULL); 
              add_opcode((yyval)); 
              // printf("OpTypeReserveId\n"); 
          ;}
    break;

  case 599:

/* Line 1455 of yacc.c  */
#line 3870 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(37, 39, NULL); 
              add_opcode((yyval)); 
              // printf("OpTypeQueue\n"); 
          ;}
    break;

  case 600:

/* Line 1455 of yacc.c  */
#line 3876 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(38, 40, NULL); 
              add_opcode((yyval)); 
              // printf("OpTypePipe\n"); 
          ;}
    break;

  case 601:

/* Line 1455 of yacc.c  */
#line 3882 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(39, 41, NULL); 
              add_opcode((yyval)); 
              // printf("OpTypeForwardPointer\n"); 
          ;}
    break;

  case 602:

/* Line 1455 of yacc.c  */
#line 3888 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(41, 42, NULL); 
              add_opcode((yyval)); 
              // printf("OpConstantTrue\n"); 
          ;}
    break;

  case 603:

/* Line 1455 of yacc.c  */
#line 3894 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(42, 43, NULL); 
              add_opcode((yyval)); 
              // printf("OpConstantFalse\n"); 
          ;}
    break;

  case 604:

/* Line 1455 of yacc.c  */
#line 3900 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(43, 44, NULL); 
              add_opcode((yyval)); 
              // printf("OpConstant\n"); 
          ;}
    break;

  case 605:

/* Line 1455 of yacc.c  */
#line 3906 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(44, 45, NULL); 
              add_opcode((yyval)); 
              // printf("OpConstantComposite\n"); 
          ;}
    break;

  case 606:

/* Line 1455 of yacc.c  */
#line 3912 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(45, 46, NULL); 
              add_opcode((yyval)); 
              // printf("OpConstantSampler\n"); 
          ;}
    break;

  case 607:

/* Line 1455 of yacc.c  */
#line 3918 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(46, 47, NULL); 
              add_opcode((yyval)); 
              // printf("OpConstantNull\n"); 
          ;}
    break;

  case 608:

/* Line 1455 of yacc.c  */
#line 3924 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(48, 48, NULL); 
              add_opcode((yyval)); 
              // printf("OpSpecConstantTrue\n"); 
          ;}
    break;

  case 609:

/* Line 1455 of yacc.c  */
#line 3930 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(49, 49, NULL); 
              add_opcode((yyval)); 
              // printf("OpSpecConstantFalse\n"); 
          ;}
    break;

  case 610:

/* Line 1455 of yacc.c  */
#line 3936 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(50, 50, NULL); 
              add_opcode((yyval)); 
              // printf("OpSpecConstant\n"); 
          ;}
    break;

  case 611:

/* Line 1455 of yacc.c  */
#line 3942 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(51, 51, NULL); 
              add_opcode((yyval)); 
              // printf("OpSpecConstantComposite\n"); 
          ;}
    break;

  case 612:

/* Line 1455 of yacc.c  */
#line 3948 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(52, 52, NULL); 
              add_opcode((yyval)); 
              // printf("OpSpecConstantOp\n"); 
          ;}
    break;

  case 613:

/* Line 1455 of yacc.c  */
#line 3954 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(59, 53, NULL); 
              add_opcode((yyval)); 
              // printf("OpVariable\n"); 
          ;}
    break;

  case 614:

/* Line 1455 of yacc.c  */
#line 3960 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(60, 54, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageTexelPointer\n"); 
          ;}
    break;

  case 615:

/* Line 1455 of yacc.c  */
#line 3966 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(61, 55, NULL); 
              add_opcode((yyval)); 
              // printf("OpLoad\n"); 
          ;}
    break;

  case 616:

/* Line 1455 of yacc.c  */
#line 3972 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(62, 56, NULL); 
              add_opcode((yyval)); 
              // printf("OpStore\n"); 
          ;}
    break;

  case 617:

/* Line 1455 of yacc.c  */
#line 3978 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(63, 57, NULL); 
              add_opcode((yyval)); 
              // printf("OpCopyMemory\n"); 
          ;}
    break;

  case 618:

/* Line 1455 of yacc.c  */
#line 3984 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(64, 58, NULL); 
              add_opcode((yyval)); 
              // printf("OpCopyMemorySized\n"); 
          ;}
    break;

  case 619:

/* Line 1455 of yacc.c  */
#line 3990 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(65, 59, NULL); 
              add_opcode((yyval)); 
              // printf("OpAccessChain\n"); 
          ;}
    break;

  case 620:

/* Line 1455 of yacc.c  */
#line 3996 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(66, 60, NULL); 
              add_opcode((yyval)); 
              // printf("OpInBoundsAccessChain\n"); 
          ;}
    break;

  case 621:

/* Line 1455 of yacc.c  */
#line 4002 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(67, 61, NULL); 
              add_opcode((yyval)); 
              // printf("OpPtrAccessChain\n"); 
          ;}
    break;

  case 622:

/* Line 1455 of yacc.c  */
#line 4008 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(68, 62, NULL); 
              add_opcode((yyval)); 
              // printf("OpArrayLength\n"); 
          ;}
    break;

  case 623:

/* Line 1455 of yacc.c  */
#line 4014 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(69, 63, NULL); 
              add_opcode((yyval)); 
              // printf("OpGenericPtrMemSemantics\n"); 
          ;}
    break;

  case 624:

/* Line 1455 of yacc.c  */
#line 4020 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(70, 64, NULL); 
              add_opcode((yyval)); 
              // printf("OpInBoundsPtrAccessChain\n"); 
          ;}
    break;

  case 625:

/* Line 1455 of yacc.c  */
#line 4026 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(54, 65, NULL); 
              add_opcode((yyval)); 
              // printf("OpFunction\n"); 
          ;}
    break;

  case 626:

/* Line 1455 of yacc.c  */
#line 4032 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(55, 66, NULL); 
              add_opcode((yyval)); 
              // printf("OpFunctionParameter\n"); 
          ;}
    break;

  case 627:

/* Line 1455 of yacc.c  */
#line 4038 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(56, 67, NULL); 
              add_opcode((yyval)); 
              // printf("OpFunctionEnd\n"); 
          ;}
    break;

  case 628:

/* Line 1455 of yacc.c  */
#line 4044 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(57, 68, NULL); 
              add_opcode((yyval)); 
              // printf("OpFunctionCall\n"); 
          ;}
    break;

  case 629:

/* Line 1455 of yacc.c  */
#line 4050 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(86, 69, NULL); 
              add_opcode((yyval)); 
              // printf("OpSampledImage\n"); 
          ;}
    break;

  case 630:

/* Line 1455 of yacc.c  */
#line 4056 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(87, 70, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageSampleImplicitLod\n"); 
          ;}
    break;

  case 631:

/* Line 1455 of yacc.c  */
#line 4062 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(88, 71, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageSampleExplicitLod\n"); 
          ;}
    break;

  case 632:

/* Line 1455 of yacc.c  */
#line 4068 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(89, 72, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageSampleDrefImplicitLod\n"); 
          ;}
    break;

  case 633:

/* Line 1455 of yacc.c  */
#line 4074 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(90, 73, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageSampleDrefExplicitLod\n"); 
          ;}
    break;

  case 634:

/* Line 1455 of yacc.c  */
#line 4080 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(91, 74, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageSampleProjImplicitLod\n"); 
          ;}
    break;

  case 635:

/* Line 1455 of yacc.c  */
#line 4086 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(92, 75, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageSampleProjExplicitLod\n"); 
          ;}
    break;

  case 636:

/* Line 1455 of yacc.c  */
#line 4092 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(93, 76, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageSampleProjDrefImplicitLod\n"); 
          ;}
    break;

  case 637:

/* Line 1455 of yacc.c  */
#line 4098 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(94, 77, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageSampleProjDrefExplicitLod\n"); 
          ;}
    break;

  case 638:

/* Line 1455 of yacc.c  */
#line 4104 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(95, 78, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageFetch\n"); 
          ;}
    break;

  case 639:

/* Line 1455 of yacc.c  */
#line 4110 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(96, 79, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageGather\n"); 
          ;}
    break;

  case 640:

/* Line 1455 of yacc.c  */
#line 4116 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(97, 80, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageDrefGather\n"); 
          ;}
    break;

  case 641:

/* Line 1455 of yacc.c  */
#line 4122 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(98, 81, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageRead\n"); 
          ;}
    break;

  case 642:

/* Line 1455 of yacc.c  */
#line 4128 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(99, 82, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageWrite\n"); 
          ;}
    break;

  case 643:

/* Line 1455 of yacc.c  */
#line 4134 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(100, 83, NULL); 
              add_opcode((yyval)); 
              // printf("OpImage\n"); 
          ;}
    break;

  case 644:

/* Line 1455 of yacc.c  */
#line 4140 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(101, 84, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageQueryFormat\n"); 
          ;}
    break;

  case 645:

/* Line 1455 of yacc.c  */
#line 4146 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(102, 85, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageQueryOrder\n"); 
          ;}
    break;

  case 646:

/* Line 1455 of yacc.c  */
#line 4152 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(103, 86, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageQuerySizeLod\n"); 
          ;}
    break;

  case 647:

/* Line 1455 of yacc.c  */
#line 4158 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(104, 87, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageQuerySize\n"); 
          ;}
    break;

  case 648:

/* Line 1455 of yacc.c  */
#line 4164 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(105, 88, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageQueryLod\n"); 
          ;}
    break;

  case 649:

/* Line 1455 of yacc.c  */
#line 4170 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(106, 89, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageQueryLevels\n"); 
          ;}
    break;

  case 650:

/* Line 1455 of yacc.c  */
#line 4176 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(107, 90, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageQuerySamples\n"); 
          ;}
    break;

  case 651:

/* Line 1455 of yacc.c  */
#line 4182 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(305, 91, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageSparseSampleImplicitLod\n"); 
          ;}
    break;

  case 652:

/* Line 1455 of yacc.c  */
#line 4188 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(306, 92, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageSparseSampleExplicitLod\n"); 
          ;}
    break;

  case 653:

/* Line 1455 of yacc.c  */
#line 4194 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(307, 93, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageSparseSampleDrefImplicitLod\n"); 
          ;}
    break;

  case 654:

/* Line 1455 of yacc.c  */
#line 4200 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(308, 94, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageSparseSampleDrefExplicitLod\n"); 
          ;}
    break;

  case 655:

/* Line 1455 of yacc.c  */
#line 4206 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(309, 95, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageSparseSampleProjImplicitLod\n"); 
          ;}
    break;

  case 656:

/* Line 1455 of yacc.c  */
#line 4212 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(310, 96, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageSparseSampleProjExplicitLod\n"); 
          ;}
    break;

  case 657:

/* Line 1455 of yacc.c  */
#line 4218 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(311, 97, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageSparseSampleProjDrefImplicitLod\n"); 
          ;}
    break;

  case 658:

/* Line 1455 of yacc.c  */
#line 4224 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(312, 98, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageSparseSampleProjDrefExplicitLod\n"); 
          ;}
    break;

  case 659:

/* Line 1455 of yacc.c  */
#line 4230 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(313, 99, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageSparseFetch\n"); 
          ;}
    break;

  case 660:

/* Line 1455 of yacc.c  */
#line 4236 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(314, 100, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageSparseGather\n"); 
          ;}
    break;

  case 661:

/* Line 1455 of yacc.c  */
#line 4242 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(315, 101, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageSparseDrefGather\n"); 
          ;}
    break;

  case 662:

/* Line 1455 of yacc.c  */
#line 4248 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(316, 102, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageSparseTexelsResident\n"); 
          ;}
    break;

  case 663:

/* Line 1455 of yacc.c  */
#line 4254 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(320, 103, NULL); 
              add_opcode((yyval)); 
              // printf("OpImageSparseRead\n"); 
          ;}
    break;

  case 664:

/* Line 1455 of yacc.c  */
#line 4260 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(109, 104, NULL); 
              add_opcode((yyval)); 
              // printf("OpConvertFToU\n"); 
          ;}
    break;

  case 665:

/* Line 1455 of yacc.c  */
#line 4266 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(110, 105, NULL); 
              add_opcode((yyval)); 
              // printf("OpConvertFToS\n"); 
          ;}
    break;

  case 666:

/* Line 1455 of yacc.c  */
#line 4272 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(111, 106, NULL); 
              add_opcode((yyval)); 
              // printf("OpConvertSToF\n"); 
          ;}
    break;

  case 667:

/* Line 1455 of yacc.c  */
#line 4278 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(112, 107, NULL); 
              add_opcode((yyval)); 
              // printf("OpConvertUToF\n"); 
          ;}
    break;

  case 668:

/* Line 1455 of yacc.c  */
#line 4284 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(113, 108, NULL); 
              add_opcode((yyval)); 
              // printf("OpUConvert\n"); 
          ;}
    break;

  case 669:

/* Line 1455 of yacc.c  */
#line 4290 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(114, 109, NULL); 
              add_opcode((yyval)); 
              // printf("OpSConvert\n"); 
          ;}
    break;

  case 670:

/* Line 1455 of yacc.c  */
#line 4296 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(115, 110, NULL); 
              add_opcode((yyval)); 
              // printf("OpFConvert\n"); 
          ;}
    break;

  case 671:

/* Line 1455 of yacc.c  */
#line 4302 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(116, 111, NULL); 
              add_opcode((yyval)); 
              // printf("OpQuantizeToF16\n"); 
          ;}
    break;

  case 672:

/* Line 1455 of yacc.c  */
#line 4308 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(117, 112, NULL); 
              add_opcode((yyval)); 
              // printf("OpConvertPtrToU\n"); 
          ;}
    break;

  case 673:

/* Line 1455 of yacc.c  */
#line 4314 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(118, 113, NULL); 
              add_opcode((yyval)); 
              // printf("OpSatConvertSToU\n"); 
          ;}
    break;

  case 674:

/* Line 1455 of yacc.c  */
#line 4320 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(119, 114, NULL); 
              add_opcode((yyval)); 
              // printf("OpSatConvertUToS\n"); 
          ;}
    break;

  case 675:

/* Line 1455 of yacc.c  */
#line 4326 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(120, 115, NULL); 
              add_opcode((yyval)); 
              // printf("OpConvertUToPtr\n"); 
          ;}
    break;

  case 676:

/* Line 1455 of yacc.c  */
#line 4332 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(121, 116, NULL); 
              add_opcode((yyval)); 
              // printf("OpPtrCastToGeneric\n"); 
          ;}
    break;

  case 677:

/* Line 1455 of yacc.c  */
#line 4338 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(122, 117, NULL); 
              add_opcode((yyval)); 
              // printf("OpGenericCastToPtr\n"); 
          ;}
    break;

  case 678:

/* Line 1455 of yacc.c  */
#line 4344 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(123, 118, NULL); 
              add_opcode((yyval)); 
              // printf("OpGenericCastToPtrExplicit\n"); 
          ;}
    break;

  case 679:

/* Line 1455 of yacc.c  */
#line 4350 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(124, 119, NULL); 
              add_opcode((yyval)); 
              // printf("OpBitcast\n"); 
          ;}
    break;

  case 680:

/* Line 1455 of yacc.c  */
#line 4356 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(77, 120, NULL); 
              add_opcode((yyval)); 
              // printf("OpVectorExtractDynamic\n"); 
          ;}
    break;

  case 681:

/* Line 1455 of yacc.c  */
#line 4362 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(78, 121, NULL); 
              add_opcode((yyval)); 
              // printf("OpVectorInsertDynamic\n"); 
          ;}
    break;

  case 682:

/* Line 1455 of yacc.c  */
#line 4368 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(79, 122, NULL); 
              add_opcode((yyval)); 
              // printf("OpVectorShuffle\n"); 
          ;}
    break;

  case 683:

/* Line 1455 of yacc.c  */
#line 4374 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(80, 123, NULL); 
              add_opcode((yyval)); 
              // printf("OpCompositeConstruct\n"); 
          ;}
    break;

  case 684:

/* Line 1455 of yacc.c  */
#line 4380 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(81, 124, NULL); 
              add_opcode((yyval)); 
              // printf("OpCompositeExtract\n"); 
          ;}
    break;

  case 685:

/* Line 1455 of yacc.c  */
#line 4386 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(82, 125, NULL); 
              add_opcode((yyval)); 
              // printf("OpCompositeInsert\n"); 
          ;}
    break;

  case 686:

/* Line 1455 of yacc.c  */
#line 4392 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(83, 126, NULL); 
              add_opcode((yyval)); 
              // printf("OpCopyObject\n"); 
          ;}
    break;

  case 687:

/* Line 1455 of yacc.c  */
#line 4398 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(84, 127, NULL); 
              add_opcode((yyval)); 
              // printf("OpTranspose\n"); 
          ;}
    break;

  case 688:

/* Line 1455 of yacc.c  */
#line 4404 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(126, 128, NULL); 
              add_opcode((yyval)); 
              // printf("OpSNegate\n"); 
          ;}
    break;

  case 689:

/* Line 1455 of yacc.c  */
#line 4410 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(127, 129, NULL); 
              add_opcode((yyval)); 
              // printf("OpFNegate\n"); 
          ;}
    break;

  case 690:

/* Line 1455 of yacc.c  */
#line 4416 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(128, 130, NULL); 
              add_opcode((yyval)); 
              // printf("OpIAdd\n"); 
          ;}
    break;

  case 691:

/* Line 1455 of yacc.c  */
#line 4422 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(129, 131, NULL); 
              add_opcode((yyval)); 
              // printf("OpFAdd\n"); 
          ;}
    break;

  case 692:

/* Line 1455 of yacc.c  */
#line 4428 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(130, 132, NULL); 
              add_opcode((yyval)); 
              // printf("OpISub\n"); 
          ;}
    break;

  case 693:

/* Line 1455 of yacc.c  */
#line 4434 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(131, 133, NULL); 
              add_opcode((yyval)); 
              // printf("OpFSub\n"); 
          ;}
    break;

  case 694:

/* Line 1455 of yacc.c  */
#line 4440 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(132, 134, NULL); 
              add_opcode((yyval)); 
              // printf("OpIMul\n"); 
          ;}
    break;

  case 695:

/* Line 1455 of yacc.c  */
#line 4446 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(133, 135, NULL); 
              add_opcode((yyval)); 
              // printf("OpFMul\n"); 
          ;}
    break;

  case 696:

/* Line 1455 of yacc.c  */
#line 4452 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(134, 136, NULL); 
              add_opcode((yyval)); 
              // printf("OpUDiv\n"); 
          ;}
    break;

  case 697:

/* Line 1455 of yacc.c  */
#line 4458 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(135, 137, NULL); 
              add_opcode((yyval)); 
              // printf("OpSDiv\n"); 
          ;}
    break;

  case 698:

/* Line 1455 of yacc.c  */
#line 4464 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(136, 138, NULL); 
              add_opcode((yyval)); 
              // printf("OpFDiv\n"); 
          ;}
    break;

  case 699:

/* Line 1455 of yacc.c  */
#line 4470 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(137, 139, NULL); 
              add_opcode((yyval)); 
              // printf("OpUMod\n"); 
          ;}
    break;

  case 700:

/* Line 1455 of yacc.c  */
#line 4476 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(138, 140, NULL); 
              add_opcode((yyval)); 
              // printf("OpSRem\n"); 
          ;}
    break;

  case 701:

/* Line 1455 of yacc.c  */
#line 4482 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(139, 141, NULL); 
              add_opcode((yyval)); 
              // printf("OpSMod\n"); 
          ;}
    break;

  case 702:

/* Line 1455 of yacc.c  */
#line 4488 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(140, 142, NULL); 
              add_opcode((yyval)); 
              // printf("OpFRem\n"); 
          ;}
    break;

  case 703:

/* Line 1455 of yacc.c  */
#line 4494 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(141, 143, NULL); 
              add_opcode((yyval)); 
              // printf("OpFMod\n"); 
          ;}
    break;

  case 704:

/* Line 1455 of yacc.c  */
#line 4500 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(142, 144, NULL); 
              add_opcode((yyval)); 
              // printf("OpVectorTimesScalar\n"); 
          ;}
    break;

  case 705:

/* Line 1455 of yacc.c  */
#line 4506 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(143, 145, NULL); 
              add_opcode((yyval)); 
              // printf("OpMatrixTimesScalar\n"); 
          ;}
    break;

  case 706:

/* Line 1455 of yacc.c  */
#line 4512 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(144, 146, NULL); 
              add_opcode((yyval)); 
              // printf("OpVectorTimesMatrix\n"); 
          ;}
    break;

  case 707:

/* Line 1455 of yacc.c  */
#line 4518 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(145, 147, NULL); 
              add_opcode((yyval)); 
              // printf("OpMatrixTimesVector\n"); 
          ;}
    break;

  case 708:

/* Line 1455 of yacc.c  */
#line 4524 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(146, 148, NULL); 
              add_opcode((yyval)); 
              // printf("OpMatrixTimesMatrix\n"); 
          ;}
    break;

  case 709:

/* Line 1455 of yacc.c  */
#line 4530 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(147, 149, NULL); 
              add_opcode((yyval)); 
              // printf("OpOuterProduct\n"); 
          ;}
    break;

  case 710:

/* Line 1455 of yacc.c  */
#line 4536 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(148, 150, NULL); 
              add_opcode((yyval)); 
              // printf("OpDot\n"); 
          ;}
    break;

  case 711:

/* Line 1455 of yacc.c  */
#line 4542 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(149, 151, NULL); 
              add_opcode((yyval)); 
              // printf("OpIAddCarry\n"); 
          ;}
    break;

  case 712:

/* Line 1455 of yacc.c  */
#line 4548 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(150, 152, NULL); 
              add_opcode((yyval)); 
              // printf("OpISubBorrow\n"); 
          ;}
    break;

  case 713:

/* Line 1455 of yacc.c  */
#line 4554 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(151, 153, NULL); 
              add_opcode((yyval)); 
              // printf("OpUMulExtended\n"); 
          ;}
    break;

  case 714:

/* Line 1455 of yacc.c  */
#line 4560 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(152, 154, NULL); 
              add_opcode((yyval)); 
              // printf("OpSMulExtended\n"); 
          ;}
    break;

  case 715:

/* Line 1455 of yacc.c  */
#line 4566 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(194, 155, NULL); 
              add_opcode((yyval)); 
              // printf("OpShiftRightLogical\n"); 
          ;}
    break;

  case 716:

/* Line 1455 of yacc.c  */
#line 4572 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(195, 156, NULL); 
              add_opcode((yyval)); 
              // printf("OpShiftRightArithmetic\n"); 
          ;}
    break;

  case 717:

/* Line 1455 of yacc.c  */
#line 4578 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(196, 157, NULL); 
              add_opcode((yyval)); 
              // printf("OpShiftLeftLogical\n"); 
          ;}
    break;

  case 718:

/* Line 1455 of yacc.c  */
#line 4584 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(197, 158, NULL); 
              add_opcode((yyval)); 
              // printf("OpBitwiseOr\n"); 
          ;}
    break;

  case 719:

/* Line 1455 of yacc.c  */
#line 4590 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(198, 159, NULL); 
              add_opcode((yyval)); 
              // printf("OpBitwiseXor\n"); 
          ;}
    break;

  case 720:

/* Line 1455 of yacc.c  */
#line 4596 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(199, 160, NULL); 
              add_opcode((yyval)); 
              // printf("OpBitwiseAnd\n"); 
          ;}
    break;

  case 721:

/* Line 1455 of yacc.c  */
#line 4602 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(200, 161, NULL); 
              add_opcode((yyval)); 
              // printf("OpNot\n"); 
          ;}
    break;

  case 722:

/* Line 1455 of yacc.c  */
#line 4608 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(201, 162, NULL); 
              add_opcode((yyval)); 
              // printf("OpBitFieldInsert\n"); 
          ;}
    break;

  case 723:

/* Line 1455 of yacc.c  */
#line 4614 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(202, 163, NULL); 
              add_opcode((yyval)); 
              // printf("OpBitFieldSExtract\n"); 
          ;}
    break;

  case 724:

/* Line 1455 of yacc.c  */
#line 4620 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(203, 164, NULL); 
              add_opcode((yyval)); 
              // printf("OpBitFieldUExtract\n"); 
          ;}
    break;

  case 725:

/* Line 1455 of yacc.c  */
#line 4626 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(204, 165, NULL); 
              add_opcode((yyval)); 
              // printf("OpBitReverse\n"); 
          ;}
    break;

  case 726:

/* Line 1455 of yacc.c  */
#line 4632 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(205, 166, NULL); 
              add_opcode((yyval)); 
              // printf("OpBitCount\n"); 
          ;}
    break;

  case 727:

/* Line 1455 of yacc.c  */
#line 4638 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(154, 167, NULL); 
              add_opcode((yyval)); 
              // printf("OpAny\n"); 
          ;}
    break;

  case 728:

/* Line 1455 of yacc.c  */
#line 4644 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(155, 168, NULL); 
              add_opcode((yyval)); 
              // printf("OpAll\n"); 
          ;}
    break;

  case 729:

/* Line 1455 of yacc.c  */
#line 4650 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(156, 169, NULL); 
              add_opcode((yyval)); 
              // printf("OpIsNan\n"); 
          ;}
    break;

  case 730:

/* Line 1455 of yacc.c  */
#line 4656 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(157, 170, NULL); 
              add_opcode((yyval)); 
              // printf("OpIsInf\n"); 
          ;}
    break;

  case 731:

/* Line 1455 of yacc.c  */
#line 4662 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(158, 171, NULL); 
              add_opcode((yyval)); 
              // printf("OpIsFinite\n"); 
          ;}
    break;

  case 732:

/* Line 1455 of yacc.c  */
#line 4668 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(159, 172, NULL); 
              add_opcode((yyval)); 
              // printf("OpIsNormal\n"); 
          ;}
    break;

  case 733:

/* Line 1455 of yacc.c  */
#line 4674 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(160, 173, NULL); 
              add_opcode((yyval)); 
              // printf("OpSignBitSet\n"); 
          ;}
    break;

  case 734:

/* Line 1455 of yacc.c  */
#line 4680 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(161, 174, NULL); 
              add_opcode((yyval)); 
              // printf("OpLessOrGreater\n"); 
          ;}
    break;

  case 735:

/* Line 1455 of yacc.c  */
#line 4686 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(162, 175, NULL); 
              add_opcode((yyval)); 
              // printf("OpOrdered\n"); 
          ;}
    break;

  case 736:

/* Line 1455 of yacc.c  */
#line 4692 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(163, 176, NULL); 
              add_opcode((yyval)); 
              // printf("OpUnordered\n"); 
          ;}
    break;

  case 737:

/* Line 1455 of yacc.c  */
#line 4698 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(164, 177, NULL); 
              add_opcode((yyval)); 
              // printf("OpLogicalEqual\n"); 
          ;}
    break;

  case 738:

/* Line 1455 of yacc.c  */
#line 4704 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(165, 178, NULL); 
              add_opcode((yyval)); 
              // printf("OpLogicalNotEqual\n"); 
          ;}
    break;

  case 739:

/* Line 1455 of yacc.c  */
#line 4710 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(166, 179, NULL); 
              add_opcode((yyval)); 
              // printf("OpLogicalOr\n"); 
          ;}
    break;

  case 740:

/* Line 1455 of yacc.c  */
#line 4716 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(167, 180, NULL); 
              add_opcode((yyval)); 
              // printf("OpLogicalAnd\n"); 
          ;}
    break;

  case 741:

/* Line 1455 of yacc.c  */
#line 4722 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(168, 181, NULL); 
              add_opcode((yyval)); 
              // printf("OpLogicalNot\n"); 
          ;}
    break;

  case 742:

/* Line 1455 of yacc.c  */
#line 4728 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(169, 182, NULL); 
              add_opcode((yyval)); 
              // printf("OpSelect\n"); 
          ;}
    break;

  case 743:

/* Line 1455 of yacc.c  */
#line 4734 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(170, 183, NULL); 
              add_opcode((yyval)); 
              // printf("OpIEqual\n"); 
          ;}
    break;

  case 744:

/* Line 1455 of yacc.c  */
#line 4740 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(171, 184, NULL); 
              add_opcode((yyval)); 
              // printf("OpINotEqual\n"); 
          ;}
    break;

  case 745:

/* Line 1455 of yacc.c  */
#line 4746 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(172, 185, NULL); 
              add_opcode((yyval)); 
              // printf("OpUGreaterThan\n"); 
          ;}
    break;

  case 746:

/* Line 1455 of yacc.c  */
#line 4752 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(173, 186, NULL); 
              add_opcode((yyval)); 
              // printf("OpSGreaterThan\n"); 
          ;}
    break;

  case 747:

/* Line 1455 of yacc.c  */
#line 4758 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(174, 187, NULL); 
              add_opcode((yyval)); 
              // printf("OpUGreaterThanEqual\n"); 
          ;}
    break;

  case 748:

/* Line 1455 of yacc.c  */
#line 4764 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(175, 188, NULL); 
              add_opcode((yyval)); 
              // printf("OpSGreaterThanEqual\n"); 
          ;}
    break;

  case 749:

/* Line 1455 of yacc.c  */
#line 4770 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(176, 189, NULL); 
              add_opcode((yyval)); 
              // printf("OpULessThan\n"); 
          ;}
    break;

  case 750:

/* Line 1455 of yacc.c  */
#line 4776 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(177, 190, NULL); 
              add_opcode((yyval)); 
              // printf("OpSLessThan\n"); 
          ;}
    break;

  case 751:

/* Line 1455 of yacc.c  */
#line 4782 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(178, 191, NULL); 
              add_opcode((yyval)); 
              // printf("OpULessThanEqual\n"); 
          ;}
    break;

  case 752:

/* Line 1455 of yacc.c  */
#line 4788 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(179, 192, NULL); 
              add_opcode((yyval)); 
              // printf("OpSLessThanEqual\n"); 
          ;}
    break;

  case 753:

/* Line 1455 of yacc.c  */
#line 4794 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(180, 193, NULL); 
              add_opcode((yyval)); 
              // printf("OpFOrdEqual\n"); 
          ;}
    break;

  case 754:

/* Line 1455 of yacc.c  */
#line 4800 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(181, 194, NULL); 
              add_opcode((yyval)); 
              // printf("OpFUnordEqual\n"); 
          ;}
    break;

  case 755:

/* Line 1455 of yacc.c  */
#line 4806 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(182, 195, NULL); 
              add_opcode((yyval)); 
              // printf("OpFOrdNotEqual\n"); 
          ;}
    break;

  case 756:

/* Line 1455 of yacc.c  */
#line 4812 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(183, 196, NULL); 
              add_opcode((yyval)); 
              // printf("OpFUnordNotEqual\n"); 
          ;}
    break;

  case 757:

/* Line 1455 of yacc.c  */
#line 4818 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(184, 197, NULL); 
              add_opcode((yyval)); 
              // printf("OpFOrdLessThan\n"); 
          ;}
    break;

  case 758:

/* Line 1455 of yacc.c  */
#line 4824 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(185, 198, NULL); 
              add_opcode((yyval)); 
              // printf("OpFUnordLessThan\n"); 
          ;}
    break;

  case 759:

/* Line 1455 of yacc.c  */
#line 4830 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(186, 199, NULL); 
              add_opcode((yyval)); 
              // printf("OpFOrdGreaterThan\n"); 
          ;}
    break;

  case 760:

/* Line 1455 of yacc.c  */
#line 4836 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(187, 200, NULL); 
              add_opcode((yyval)); 
              // printf("OpFUnordGreaterThan\n"); 
          ;}
    break;

  case 761:

/* Line 1455 of yacc.c  */
#line 4842 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(188, 201, NULL); 
              add_opcode((yyval)); 
              // printf("OpFOrdLessThanEqual\n"); 
          ;}
    break;

  case 762:

/* Line 1455 of yacc.c  */
#line 4848 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(189, 202, NULL); 
              add_opcode((yyval)); 
              // printf("OpFUnordLessThanEqual\n"); 
          ;}
    break;

  case 763:

/* Line 1455 of yacc.c  */
#line 4854 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(190, 203, NULL); 
              add_opcode((yyval)); 
              // printf("OpFOrdGreaterThanEqual\n"); 
          ;}
    break;

  case 764:

/* Line 1455 of yacc.c  */
#line 4860 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(191, 204, NULL); 
              add_opcode((yyval)); 
              // printf("OpFUnordGreaterThanEqual\n"); 
          ;}
    break;

  case 765:

/* Line 1455 of yacc.c  */
#line 4866 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(207, 205, NULL); 
              add_opcode((yyval)); 
              // printf("OpDPdx\n"); 
          ;}
    break;

  case 766:

/* Line 1455 of yacc.c  */
#line 4872 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(208, 206, NULL); 
              add_opcode((yyval)); 
              // printf("OpDPdy\n"); 
          ;}
    break;

  case 767:

/* Line 1455 of yacc.c  */
#line 4878 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(209, 207, NULL); 
              add_opcode((yyval)); 
              // printf("OpFwidth\n"); 
          ;}
    break;

  case 768:

/* Line 1455 of yacc.c  */
#line 4884 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(210, 208, NULL); 
              add_opcode((yyval)); 
              // printf("OpDPdxFine\n"); 
          ;}
    break;

  case 769:

/* Line 1455 of yacc.c  */
#line 4890 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(211, 209, NULL); 
              add_opcode((yyval)); 
              // printf("OpDPdyFine\n"); 
          ;}
    break;

  case 770:

/* Line 1455 of yacc.c  */
#line 4896 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(212, 210, NULL); 
              add_opcode((yyval)); 
              // printf("OpFwidthFine\n"); 
          ;}
    break;

  case 771:

/* Line 1455 of yacc.c  */
#line 4902 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(213, 211, NULL); 
              add_opcode((yyval)); 
              // printf("OpDPdxCoarse\n"); 
          ;}
    break;

  case 772:

/* Line 1455 of yacc.c  */
#line 4908 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(214, 212, NULL); 
              add_opcode((yyval)); 
              // printf("OpDPdyCoarse\n"); 
          ;}
    break;

  case 773:

/* Line 1455 of yacc.c  */
#line 4914 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(215, 213, NULL); 
              add_opcode((yyval)); 
              // printf("OpFwidthCoarse\n"); 
          ;}
    break;

  case 774:

/* Line 1455 of yacc.c  */
#line 4920 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(245, 214, NULL); 
              add_opcode((yyval)); 
              // printf("OpPhi\n"); 
          ;}
    break;

  case 775:

/* Line 1455 of yacc.c  */
#line 4926 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(246, 215, NULL); 
              add_opcode((yyval)); 
              // printf("OpLoopMerge\n"); 
          ;}
    break;

  case 776:

/* Line 1455 of yacc.c  */
#line 4932 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(247, 216, NULL); 
              add_opcode((yyval)); 
              // printf("OpSelectionMerge\n"); 
          ;}
    break;

  case 777:

/* Line 1455 of yacc.c  */
#line 4938 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(248, 217, NULL); 
              add_opcode((yyval)); 
              // printf("OpLabel\n"); 
          ;}
    break;

  case 778:

/* Line 1455 of yacc.c  */
#line 4944 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(249, 218, NULL); 
              add_opcode((yyval)); 
              // printf("OpBranch\n"); 
          ;}
    break;

  case 779:

/* Line 1455 of yacc.c  */
#line 4950 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(250, 219, NULL); 
              add_opcode((yyval)); 
              // printf("OpBranchConditional\n"); 
          ;}
    break;

  case 780:

/* Line 1455 of yacc.c  */
#line 4956 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(251, 220, NULL); 
              add_opcode((yyval)); 
              // printf("OpSwitch\n"); 
          ;}
    break;

  case 781:

/* Line 1455 of yacc.c  */
#line 4962 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(253, 221, NULL); 
              add_opcode((yyval)); 
              // printf("OpReturn\n"); 
          ;}
    break;

  case 782:

/* Line 1455 of yacc.c  */
#line 4968 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(254, 222, NULL); 
              add_opcode((yyval)); 
              // printf("OpReturnValue\n"); 
          ;}
    break;

  case 783:

/* Line 1455 of yacc.c  */
#line 4974 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(255, 223, NULL); 
              add_opcode((yyval)); 
              // printf("OpUnreachable\n"); 
          ;}
    break;

  case 784:

/* Line 1455 of yacc.c  */
#line 4980 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(256, 224, NULL); 
              add_opcode((yyval)); 
              // printf("OpLifetimeStart\n"); 
          ;}
    break;

  case 785:

/* Line 1455 of yacc.c  */
#line 4986 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(257, 225, NULL); 
              add_opcode((yyval)); 
              // printf("OpLifetimeStop\n"); 
          ;}
    break;

  case 786:

/* Line 1455 of yacc.c  */
#line 4992 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(227, 226, NULL); 
              add_opcode((yyval)); 
              // printf("OpAtomicLoad\n"); 
          ;}
    break;

  case 787:

/* Line 1455 of yacc.c  */
#line 4998 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(228, 227, NULL); 
              add_opcode((yyval)); 
              // printf("OpAtomicStore\n"); 
          ;}
    break;

  case 788:

/* Line 1455 of yacc.c  */
#line 5004 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(229, 228, NULL); 
              add_opcode((yyval)); 
              // printf("OpAtomicExchange\n"); 
          ;}
    break;

  case 789:

/* Line 1455 of yacc.c  */
#line 5010 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(231, 229, NULL); 
              add_opcode((yyval)); 
              // printf("OpAtomicCompareExchangeWeak\n"); 
          ;}
    break;

  case 790:

/* Line 1455 of yacc.c  */
#line 5016 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(232, 230, NULL); 
              add_opcode((yyval)); 
              // printf("OpAtomicIIncrement\n"); 
          ;}
    break;

  case 791:

/* Line 1455 of yacc.c  */
#line 5022 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(233, 231, NULL); 
              add_opcode((yyval)); 
              // printf("OpAtomicIDecrement\n"); 
          ;}
    break;

  case 792:

/* Line 1455 of yacc.c  */
#line 5028 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(234, 232, NULL); 
              add_opcode((yyval)); 
              // printf("OpAtomicIAdd\n"); 
          ;}
    break;

  case 793:

/* Line 1455 of yacc.c  */
#line 5034 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(235, 233, NULL); 
              add_opcode((yyval)); 
              // printf("OpAtomicISub\n"); 
          ;}
    break;

  case 794:

/* Line 1455 of yacc.c  */
#line 5040 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(236, 234, NULL); 
              add_opcode((yyval)); 
              // printf("OpAtomicSMin\n"); 
          ;}
    break;

  case 795:

/* Line 1455 of yacc.c  */
#line 5046 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(237, 235, NULL); 
              add_opcode((yyval)); 
              // printf("OpAtomicUMin\n"); 
          ;}
    break;

  case 796:

/* Line 1455 of yacc.c  */
#line 5052 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(238, 236, NULL); 
              add_opcode((yyval)); 
              // printf("OpAtomicSMax\n"); 
          ;}
    break;

  case 797:

/* Line 1455 of yacc.c  */
#line 5058 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(239, 237, NULL); 
              add_opcode((yyval)); 
              // printf("OpAtomicUMax\n"); 
          ;}
    break;

  case 798:

/* Line 1455 of yacc.c  */
#line 5064 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(240, 238, NULL); 
              add_opcode((yyval)); 
              // printf("OpAtomicAnd\n"); 
          ;}
    break;

  case 799:

/* Line 1455 of yacc.c  */
#line 5070 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(241, 239, NULL); 
              add_opcode((yyval)); 
              // printf("OpAtomicOr\n"); 
          ;}
    break;

  case 800:

/* Line 1455 of yacc.c  */
#line 5076 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(242, 240, NULL); 
              add_opcode((yyval)); 
              // printf("OpAtomicXor\n"); 
          ;}
    break;

  case 801:

/* Line 1455 of yacc.c  */
#line 5082 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(318, 241, NULL); 
              add_opcode((yyval)); 
              // printf("OpAtomicFlagTestAndSet\n"); 
          ;}
    break;

  case 802:

/* Line 1455 of yacc.c  */
#line 5088 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(319, 242, NULL); 
              add_opcode((yyval)); 
              // printf("OpAtomicFlagClear\n"); 
          ;}
    break;

  case 803:

/* Line 1455 of yacc.c  */
#line 5094 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(220, 243, NULL); 
              add_opcode((yyval)); 
              // printf("OpEmitStreamVertex\n"); 
          ;}
    break;

  case 804:

/* Line 1455 of yacc.c  */
#line 5100 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(221, 244, NULL); 
              add_opcode((yyval)); 
              // printf("OpEndStreamPrimitive\n"); 
          ;}
    break;

  case 805:

/* Line 1455 of yacc.c  */
#line 5106 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(224, 245, NULL); 
              add_opcode((yyval)); 
              // printf("OpControlBarrier\n"); 
          ;}
    break;

  case 806:

/* Line 1455 of yacc.c  */
#line 5112 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(225, 246, NULL); 
              add_opcode((yyval)); 
              // printf("OpMemoryBarrier\n"); 
          ;}
    break;

  case 807:

/* Line 1455 of yacc.c  */
#line 5118 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(259, 247, NULL); 
              add_opcode((yyval)); 
              // printf("OpGroupAsyncCopy\n"); 
          ;}
    break;

  case 808:

/* Line 1455 of yacc.c  */
#line 5124 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(260, 248, NULL); 
              add_opcode((yyval)); 
              // printf("OpGroupWaitEvents\n"); 
          ;}
    break;

  case 809:

/* Line 1455 of yacc.c  */
#line 5130 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(261, 249, NULL); 
              add_opcode((yyval)); 
              // printf("OpGroupAll\n"); 
          ;}
    break;

  case 810:

/* Line 1455 of yacc.c  */
#line 5136 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(262, 250, NULL); 
              add_opcode((yyval)); 
              // printf("OpGroupAny\n"); 
          ;}
    break;

  case 811:

/* Line 1455 of yacc.c  */
#line 5142 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(263, 251, NULL); 
              add_opcode((yyval)); 
              // printf("OpGroupBroadcast\n"); 
          ;}
    break;

  case 812:

/* Line 1455 of yacc.c  */
#line 5148 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(264, 252, NULL); 
              add_opcode((yyval)); 
              // printf("OpGroupIAdd\n"); 
          ;}
    break;

  case 813:

/* Line 1455 of yacc.c  */
#line 5154 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(265, 253, NULL); 
              add_opcode((yyval)); 
              // printf("OpGroupFAdd\n"); 
          ;}
    break;

  case 814:

/* Line 1455 of yacc.c  */
#line 5160 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(266, 254, NULL); 
              add_opcode((yyval)); 
              // printf("OpGroupFMin\n"); 
          ;}
    break;

  case 815:

/* Line 1455 of yacc.c  */
#line 5166 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(267, 255, NULL); 
              add_opcode((yyval)); 
              // printf("OpGroupUMin\n"); 
          ;}
    break;

  case 816:

/* Line 1455 of yacc.c  */
#line 5172 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(268, 256, NULL); 
              add_opcode((yyval)); 
              // printf("OpGroupSMin\n"); 
          ;}
    break;

  case 817:

/* Line 1455 of yacc.c  */
#line 5178 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(269, 257, NULL); 
              add_opcode((yyval)); 
              // printf("OpGroupFMax\n"); 
          ;}
    break;

  case 818:

/* Line 1455 of yacc.c  */
#line 5184 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(270, 258, NULL); 
              add_opcode((yyval)); 
              // printf("OpGroupUMax\n"); 
          ;}
    break;

  case 819:

/* Line 1455 of yacc.c  */
#line 5190 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(271, 259, NULL); 
              add_opcode((yyval)); 
              // printf("OpGroupSMax\n"); 
          ;}
    break;

  case 820:

/* Line 1455 of yacc.c  */
#line 5196 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(4421, 260, NULL); 
              add_opcode((yyval)); 
              // printf("OpSubgroupBallotKHR\n"); 
          ;}
    break;

  case 821:

/* Line 1455 of yacc.c  */
#line 5202 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(4422, 261, NULL); 
              add_opcode((yyval)); 
              // printf("OpSubgroupFirstInvocationKHR\n"); 
          ;}
    break;

  case 822:

/* Line 1455 of yacc.c  */
#line 5208 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(4432, 262, NULL); 
              add_opcode((yyval)); 
              // printf("OpSubgroupReadInvocationKHR\n"); 
          ;}
    break;

  case 823:

/* Line 1455 of yacc.c  */
#line 5214 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(5000, 263, NULL); 
              add_opcode((yyval)); 
              // printf("OpGroupIAddNonUniformAMD\n"); 
          ;}
    break;

  case 824:

/* Line 1455 of yacc.c  */
#line 5220 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(5001, 264, NULL); 
              add_opcode((yyval)); 
              // printf("OpGroupFAddNonUniformAMD\n"); 
          ;}
    break;

  case 825:

/* Line 1455 of yacc.c  */
#line 5226 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(5002, 265, NULL); 
              add_opcode((yyval)); 
              // printf("OpGroupFMinNonUniformAMD\n"); 
          ;}
    break;

  case 826:

/* Line 1455 of yacc.c  */
#line 5232 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(5003, 266, NULL); 
              add_opcode((yyval)); 
              // printf("OpGroupUMinNonUniformAMD\n"); 
          ;}
    break;

  case 827:

/* Line 1455 of yacc.c  */
#line 5238 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(5004, 267, NULL); 
              add_opcode((yyval)); 
              // printf("OpGroupSMinNonUniformAMD\n"); 
          ;}
    break;

  case 828:

/* Line 1455 of yacc.c  */
#line 5244 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(5005, 268, NULL); 
              add_opcode((yyval)); 
              // printf("OpGroupFMaxNonUniformAMD\n"); 
          ;}
    break;

  case 829:

/* Line 1455 of yacc.c  */
#line 5250 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(5006, 269, NULL); 
              add_opcode((yyval)); 
              // printf("OpGroupUMaxNonUniformAMD\n"); 
          ;}
    break;

  case 830:

/* Line 1455 of yacc.c  */
#line 5256 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(5007, 270, NULL); 
              add_opcode((yyval)); 
              // printf("OpGroupSMaxNonUniformAMD\n"); 
          ;}
    break;

  case 831:

/* Line 1455 of yacc.c  */
#line 5262 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(291, 271, NULL); 
              add_opcode((yyval)); 
              // printf("OpEnqueueMarker\n"); 
          ;}
    break;

  case 832:

/* Line 1455 of yacc.c  */
#line 5268 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(293, 272, NULL); 
              add_opcode((yyval)); 
              // printf("OpGetKernelNDrangeSubGroupCount\n"); 
          ;}
    break;

  case 833:

/* Line 1455 of yacc.c  */
#line 5274 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(294, 273, NULL); 
              add_opcode((yyval)); 
              // printf("OpGetKernelNDrangeMaxSubGroupSize\n"); 
          ;}
    break;

  case 834:

/* Line 1455 of yacc.c  */
#line 5280 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(295, 274, NULL); 
              add_opcode((yyval)); 
              // printf("OpGetKernelWorkGroupSize\n"); 
          ;}
    break;

  case 835:

/* Line 1455 of yacc.c  */
#line 5286 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(296, 275, NULL); 
              add_opcode((yyval)); 
              // printf("OpGetKernelPreferredWorkGroupSizeMultiple\n"); 
          ;}
    break;

  case 836:

/* Line 1455 of yacc.c  */
#line 5292 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(297, 276, NULL); 
              add_opcode((yyval)); 
              // printf("OpRetainEvent\n"); 
          ;}
    break;

  case 837:

/* Line 1455 of yacc.c  */
#line 5298 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(298, 277, NULL); 
              add_opcode((yyval)); 
              // printf("OpReleaseEvent\n"); 
          ;}
    break;

  case 838:

/* Line 1455 of yacc.c  */
#line 5304 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(299, 278, NULL); 
              add_opcode((yyval)); 
              // printf("OpCreateUserEvent\n"); 
          ;}
    break;

  case 839:

/* Line 1455 of yacc.c  */
#line 5310 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(300, 279, NULL); 
              add_opcode((yyval)); 
              // printf("OpIsValidEvent\n"); 
          ;}
    break;

  case 840:

/* Line 1455 of yacc.c  */
#line 5316 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(301, 280, NULL); 
              add_opcode((yyval)); 
              // printf("OpSetUserEventStatus\n"); 
          ;}
    break;

  case 841:

/* Line 1455 of yacc.c  */
#line 5322 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(302, 281, NULL); 
              add_opcode((yyval)); 
              // printf("OpCaptureEventProfilingInfo\n"); 
          ;}
    break;

  case 842:

/* Line 1455 of yacc.c  */
#line 5328 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(303, 282, NULL); 
              add_opcode((yyval)); 
              // printf("OpGetDefaultQueue\n"); 
          ;}
    break;

  case 843:

/* Line 1455 of yacc.c  */
#line 5334 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(304, 283, NULL); 
              add_opcode((yyval)); 
              // printf("OpBuildNDRange\n"); 
          ;}
    break;

  case 844:

/* Line 1455 of yacc.c  */
#line 5340 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(274, 284, NULL); 
              add_opcode((yyval)); 
              // printf("OpReadPipe\n"); 
          ;}
    break;

  case 845:

/* Line 1455 of yacc.c  */
#line 5346 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(275, 285, NULL); 
              add_opcode((yyval)); 
              // printf("OpWritePipe\n"); 
          ;}
    break;

  case 846:

/* Line 1455 of yacc.c  */
#line 5352 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(276, 286, NULL); 
              add_opcode((yyval)); 
              // printf("OpReservedReadPipe\n"); 
          ;}
    break;

  case 847:

/* Line 1455 of yacc.c  */
#line 5358 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(277, 287, NULL); 
              add_opcode((yyval)); 
              // printf("OpReservedWritePipe\n"); 
          ;}
    break;

  case 848:

/* Line 1455 of yacc.c  */
#line 5364 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(278, 288, NULL); 
              add_opcode((yyval)); 
              // printf("OpReserveReadPipePackets\n"); 
          ;}
    break;

  case 849:

/* Line 1455 of yacc.c  */
#line 5370 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(279, 289, NULL); 
              add_opcode((yyval)); 
              // printf("OpReserveWritePipePackets\n"); 
          ;}
    break;

  case 850:

/* Line 1455 of yacc.c  */
#line 5376 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(280, 290, NULL); 
              add_opcode((yyval)); 
              // printf("OpCommitReadPipe\n"); 
          ;}
    break;

  case 851:

/* Line 1455 of yacc.c  */
#line 5382 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(281, 291, NULL); 
              add_opcode((yyval)); 
              // printf("OpCommitWritePipe\n"); 
          ;}
    break;

  case 852:

/* Line 1455 of yacc.c  */
#line 5388 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(282, 292, NULL); 
              add_opcode((yyval)); 
              // printf("OpIsValidReserveId\n"); 
          ;}
    break;

  case 853:

/* Line 1455 of yacc.c  */
#line 5394 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(283, 293, NULL); 
              add_opcode((yyval)); 
              // printf("OpGetNumPipePackets\n"); 
          ;}
    break;

  case 854:

/* Line 1455 of yacc.c  */
#line 5400 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(284, 294, NULL); 
              add_opcode((yyval)); 
              // printf("OpGetMaxPipePackets\n"); 
          ;}
    break;

  case 855:

/* Line 1455 of yacc.c  */
#line 5406 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(285, 295, NULL); 
              add_opcode((yyval)); 
              // printf("OpGroupReserveReadPipePackets\n"); 
          ;}
    break;

  case 856:

/* Line 1455 of yacc.c  */
#line 5412 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(286, 296, NULL); 
              add_opcode((yyval)); 
              // printf("OpGroupReserveWritePipePackets\n"); 
          ;}
    break;

  case 857:

/* Line 1455 of yacc.c  */
#line 5418 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(287, 297, NULL); 
              add_opcode((yyval)); 
              // printf("OpGroupCommitReadPipe\n"); 
          ;}
    break;

  case 858:

/* Line 1455 of yacc.c  */
#line 5424 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"
    { 
              (yyval) = construct_value_opcode(288, 298, NULL); 
              add_opcode((yyval)); 
              // printf("OpGroupCommitWritePipe\n"); 
          ;}
    break;



/* Line 1455 of yacc.c  */
#line 12546 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/y.tab.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 5431 "C:/Users/hkon2/Dropbox/Documents/Code/Misc/spurv/src/spurv.y"


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

