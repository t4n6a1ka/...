				    struct lline *new, int lennew,
	if (new == NULL)
		return new;
		for (j = 1, newend = new; j < lennew + 1; j++) {
				new = lline->next;
	newend = new;
		blob = read_sha1_file(oid->hash, &type, size);
		abb = find_unique_abbrev(elem->parent[i].oid.hash,
	abb = find_unique_abbrev(elem->oid.hash, abbrev);
				if (convert_to_git(&the_index, elem->path, result, len, &buf, safe_crlf)) {
			opt->pickaxe		||