#
# SPDX-License-Idendifier: BSD-2-Clause
#
# Copyright (c) 2025 FreeBSD Foundation
#
# This sofware was developed by Cy Schubert <cy@FreeBSD.org>
# under sponsorship from the FreeBSD Foundation.
#

.PATH:	${KRB5_DIR}/lib/krb5/asn.1

SRCS+=	asn1_encode.c \
	asn1_k_encode.c \
	ldap_key_seq.c
