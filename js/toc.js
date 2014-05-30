/**
 * TOC configuration.
 */

(function($) {

  // Document Ready
  $(function() {
    $('#toc-pane').toc({
      'selectors': 'h1,h2,h3', //elements to use as headings
      'container': '#page-content .pane-node-body', //element to find all selectors in
      'scrollToOffset': 230
    });
  });

})(jQuery);
