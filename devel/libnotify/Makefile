# Created by: Andreas Kohn <andreas@syndrom23.de>
# $FreeBSD$

PORTNAME=	libnotify
PORTVERSION=	0.7.9
CATEGORIES=	devel gnome
MASTER_SITES=	GNOME

MAINTAINER=	desktop@FreeBSD.org
COMMENT=	Library for desktop notifications

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	xsltproc:textproc/libxslt \
		docbook-xsl>=0:textproc/docbook-xsl

USES=		gmake gnome libtool meson pkgconfig tar:xz
USE_GNOME=	glib20 gdkpixbuf2 introspection:build
USE_LDCONFIG=	yes

MESON_ARGS=	-Dtests=false -Ddocbook_docs=disabled -Dgtk_doc=false

post-patch:
	${REINPLACE_CMD} -e "s#http:.*docbook.xsl#${LOCALBASE}/share/xsl/docbook/manpages/docbook.xsl#g" \
		${WRKSRC}/meson.build

.include <bsd.port.mk>
