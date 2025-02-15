PORTNAME=	grpc
PORTVERSION=	1.62.0
DISTVERSIONPREFIX=	v
PORTEPOCH=	2
CATEGORIES=	devel

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	HTTP/2-based RPC framework
WWW=		https://grpc.io/ \
		https://github.com/grpc/grpc

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${LOCALBASE}/include/xxhash.h:devel/xxhash
LIB_DEPENDS=	libabsl_base.so:devel/abseil \
		libbenchmark.so:devel/benchmark \
		libcares.so:dns/c-ares \
		libprotobuf.so:devel/protobuf \
		libre2.so:devel/re2

USES=		cmake compiler:c++17-lang cpe localbase:ldflags pathfix pkgconfig ssl

USE_GITHUB=	yes
GH_TUPLE=	census-instrumentation:opencensus-proto:v0.4.1:census_instrumentation_opencensus_proto/third_party/opencensus-proto/src \
		cncf:xds:0fa0005:cncf_xds/third_party/xds

CMAKE_ARGS=	-DCMAKE_CXX_STANDARD=17 \
		-DgRPC_ABSL_PROVIDER=package \
		-DgRPC_BENCHMARK_PROVIDER=package \
		-DgRPC_CARES_PROVIDER=package \
		-DgRPC_PROTOBUF_PROVIDER=package \
		-DgRPC_RE2_PROVIDER=package \
		-DgRPC_SSL_PROVIDER=package \
		-DgRPC_ZLIB_PROVIDER=package
CMAKE_OFF=	gRPC_BUILD_TESTS \
		gRPC_DOWNLOAD_ARCHIVES
CMAKE_ON=	BUILD_SHARED_LIBS \
		gRPC_BUILD_CODEGEN \
		gRPC_BUILD_GRPC_CPP_PLUGIN \
		gRPC_BUILD_GRPC_CSHARP_PLUGIN \
		gRPC_BUILD_GRPC_NODE_PLUGIN \
		gRPC_BUILD_GRPC_OBJECTIVE_C_PLUGIN \
		gRPC_BUILD_GRPC_PHP_PLUGIN \
		gRPC_BUILD_GRPC_PYTHON_PLUGIN \
		gRPC_BUILD_GRPC_RUBY_PLUGIN
USE_CSTD=	c11
USE_CXXSTD=	c++17
USE_LDCONFIG=	yes

PLIST_SUB=	SHLIB_MAJOR=${PORTVERSION:R} \
		SHLIB_MINOR=${PORTVERSION:E}

CONFLICTS_INSTALL=	grpc[0-9][0-9][0-9]

post-patch:
# Clean up bundled libraries
	@${RM} -r ${WRKSRC}/third_party/abseil-cpp/
	@${RM} -r ${WRKSRC}/third_party/benchmark/
	@${RM} -r ${WRKSRC}/third_party/boringssl-with-bazel/
	@${RM} -r ${WRKSRC}/third_party/cares/
	@${RM} -r ${WRKSRC}/third_party/protobuf/
	@${RM} -r ${WRKSRC}/third_party/re2/
	#@${RM} -r ${WRKSRC}/third_party/upb/
	#@${RM} -r ${WRKSRC}/third_party/utf8_range/
	@${RM} -r ${WRKSRC}/third_party/xxhash/
	@${RM} -r ${WRKSRC}/third_party/zlib/

.include <bsd.port.mk>
