PORTNAME=	help2man
PORTVERSION=	1.49.3
PORTREVISION=	1
CATEGORIES=	misc
MASTER_SITES=	GNU

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Automatically generating simple manual pages from program output
WWW=		https://www.gnu.org/software/help2man/

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gmake localbase perl5 tar:xz

GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share

INFO=		help2man
PLIST_FILES=	bin/help2man \
		share/man/man1/help2man.1.gz

OPTIONS_DEFINE=	NLS

NLS_BUILD_DEPENDS=	p5-Locale-gettext>=0:devel/p5-Locale-gettext
NLS_CONFIGURE_ENABLE=	nls
NLS_PLIST_FILES=	lib/help2man/bindtextdomain.so
NLS_RUN_DEPENDS=	p5-Locale-gettext>=0:devel/p5-Locale-gettext
NLS_USES=		gettext
NLS_VARS=		CONFIGURE_FAIL_MESSAGE="Rebuild lang/${PERL_PORT} and devel/p5-Locale-gettext manually before contacting maintainer."
NLS_VARS_OFF=		NO_ARCH=yes

.for lang in de es fr pl pt_BR ro sr sv ta uk zh_CN
NLS_INFO+=		help2man-${lang}
.endfor

.for lang in da de el eo es fi fr hr hu it ja ko nb pl pt_BR ro ru sr sv ta uk vi zh_CN
NLS_PLIST_FILES+=	share/locale/${lang}/LC_MESSAGES/help2man.mo \
			share/man/${lang}/man1/help2man.1.gz
.endfor

.include <bsd.port.mk>
