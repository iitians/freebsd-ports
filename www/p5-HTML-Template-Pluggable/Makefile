# Created by: Espen Tagestad <espen@tagestad.no>
# $FreeBSD$

PORTNAME=	HTML-Template-Pluggable
PORTVERSION=	0.17
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Extends HTML::Template with plugin support

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTML-Template>=2.7:www/p5-HTML-Template \
		p5-Test-MockObject>=1:devel/p5-Test-MockObject \
		p5-Regexp-Common>=0:textproc/p5-Regexp-Common \
		p5-Class-Trigger>=0:devel/p5-Class-Trigger

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
