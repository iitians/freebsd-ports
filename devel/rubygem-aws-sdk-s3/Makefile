# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD$

PORTNAME=	aws-sdk-s3
PORTVERSION=	1.81.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Official AWS Ruby gem for Amazon Simple Storage Service (Amazon S3)

LICENSE=	APACHE20

RUN_DEPENDS=	rubygem-aws-sdk-core>=3.104.3<4:devel/rubygem-aws-sdk-core \
		rubygem-aws-sdk-kms>1<2:devel/rubygem-aws-sdk-kms \
		rubygem-aws-sigv4>=1.1<2:devel/rubygem-aws-sigv4

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
