PORTNAME=	pyscss
PORTVERSION=	1.3.7
CATEGORIES=	textproc python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rum1cro@yandex.ru
COMMENT=	Compiler for SCSS flavor of the Sass language
WWW=		https://github.com/Kronuz/pyScss

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six@${PY_FLAVOR}
LIB_DEPENDS=	libpcre.so:devel/pcre

USE_GITHUB=	yes
GH_ACCOUNT=	Kronuz
GH_PROJECT=	pyScss

USES=		python localbase:ldflags
USE_PYTHON=	distutils autoplist pytest4

.include <bsd.port.mk>
