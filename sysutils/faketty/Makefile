PORTNAME=	faketty
DISTVERSION=	1.0.16
CATEGORIES=	sysutils

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Wrapper to exec a command in a pty, even if redirecting the output
WWW=		https://github.com/dtolnay/faketty

LICENSE=	APACHE20 MIT
LICENSE_COMB=	dual
LICENSE_FILE_APACHE20=	${WRKSRC}/LICENSE-APACHE
LICENSE_FILE_MIT=	${WRKSRC}/LICENSE-MIT

USES=		cargo
USE_GITHUB=	yes
GH_ACCOUNT=	dtolnay

CARGO_CRATES=	anstream-0.6.13 \
		anstyle-1.0.6 \
		anstyle-parse-0.2.3 \
		anstyle-query-1.0.2 \
		anstyle-wincon-3.0.2 \
		bitflags-2.4.2 \
		cfg-if-1.0.0 \
		cfg_aliases-0.1.1 \
		clap-4.5.2 \
		clap_builder-4.5.2 \
		clap_derive-4.5.0 \
		clap_lex-0.7.0 \
		colorchoice-1.0.0 \
		heck-0.4.1 \
		libc-0.2.153 \
		nix-0.28.0 \
		proc-macro2-1.0.78 \
		quote-1.0.35 \
		scratch-1.0.7 \
		strsim-0.11.0 \
		syn-2.0.52 \
		unicode-ident-1.0.12 \
		utf8parse-0.2.1 \
		windows-sys-0.52.0 \
		windows-targets-0.52.4 \
		windows_aarch64_gnullvm-0.52.4 \
		windows_aarch64_msvc-0.52.4 \
		windows_i686_gnu-0.52.4 \
		windows_i686_msvc-0.52.4 \
		windows_x86_64_gnu-0.52.4 \
		windows_x86_64_gnullvm-0.52.4 \
		windows_x86_64_msvc-0.52.4

PLIST_FILES=	bin/${PORTNAME}

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
