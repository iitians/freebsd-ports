# $FreeBSD$

PORTNAME=	scikit-image
PORTVERSION=	0.14.3
PORTREVISION=	1
DISTVERSIONPREFIX=	v
CATEGORIES=	graphics python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	makc@FreeBSD.org
COMMENT=	Image Processing SciKit (Toolbox for SciPy)

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BUILD_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}six>=1.4:devel/py-six@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}scipy>=0.9:science/py-scipy@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}numpydoc>=0.6:textproc/py-numpydoc@${PY_FLAVOR}
RUN_DEPENDS=	${PYNUMPY} \
		${PY_PILLOW} \
		${PYTHON_PKGNAMEPREFIX}six>=1.4:devel/py-six@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}scipy>=0.9:science/py-scipy@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}numpydoc>=0.6:textproc/py-numpydoc@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}networkx>=1.8:math/py-networkx@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}matplotlib>=1.1:math/py-matplotlib@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}PyWavelets>=0.4:math/py-PyWavelets@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}cloudpickle>=0.2.1:devel/py-cloudpickle@${PY_FLAVOR}

USES=		cpe python:3.6+
USE_GITHUB=	yes
USE_PYTHON=	autoplist concurrent distutils cython cython_run

PYDISTUTILS_BUILD_TARGET=	build build_ext
PYDISTUTILS_BUILDARGS+=		saveopts

post-install:
	@${FIND} ${STAGEDIR}${PYTHON_SITELIBDIR}/skimage -name "*.so" -exec ${STRIP_CMD} {} \;

do-test:
	@cd ${WRKSRC} && \
	${PYTHON_CMD} ${PYSETUP} build_ext -i && \
	${PYTHON_CMD} selftest.py && \
	${PYTHON_CMD} -m nose -vx Tests/test_*.py

.include <bsd.port.mk>
