/* IP tables module for catching the port values.
 *
 * (C) 2018 by Murat Sezgin <msezgin@iotdweb.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#include <linux/module.h>
#include <linux/skbuff.h>
#include <linux/ip.h>
#include <linux/ipv6.h>

#include <linux/netfilter/x_tables.h>

MODULE_AUTHOR("Murat Sezgin <msezgin@iotdweb.com>");
MODULE_DESCRIPTION("Xtables: port catch");
MODULE_LICENSE("GPL");
